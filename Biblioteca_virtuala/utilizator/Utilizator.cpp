//
// Created by Vlad on 21.05.2025.
//

#include "Utilizator.h"
#include "E:\Facultate\Anul 1\Semestrul 2\Biblioteca_virtuala\utilizator/Data.h"
#include "E:\Facultate\Anul 1\Semestrul 2\Biblioteca_virtuala\utilizator/Imprumut.h"
#include "E:\Facultate\Anul 1\Semestrul 2\Biblioteca_virtuala\fisiere/GestionareFisiere.h"
#include "E:\Facultate\Anul 1\Semestrul 2\Biblioteca_virtuala\administrator/Carte.h"
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;


Utilizator::Utilizator() {
    //incarca cosul din fisier
    cos.setCarti(GestionareFisiere::incarcaCos());
}

void Utilizator::vizualizareCos() const {
    cos.vizualizeazaCos();
}

void Utilizator::adaugaCarte(const string &isbn, int nr) {
    cos.adaugaCarte(isbn, nr);
    GestionareFisiere::salveazaCos(cos.getCarti());
    cout<<"Carte adaugata in cos.\n";
}

void Utilizator::modificaCarte(const string &isbn, int nouNr) {
    cos.modificareCarte(isbn, nouNr);
    GestionareFisiere::salveazaCos(cos.getCarti());
    cout<<"Carte modificata in cos.\n";
}

void Utilizator::stergeCarte(const string &isbn) {
    cos.stergeCarte(isbn);
    GestionareFisiere::salveazaCos(cos.getCarti());
    cout<<"Carte stearsa din cos.\n";
}

void Utilizator::imprumuta(const string &numeUtilizator) {
    auto cosCurent = cos.getCarti();
    auto toateCartile = GestionareFisiere::incarcaCarti();
    vector<Carte> cartiImprumutate;

    for (const auto& [isbn, nr] : cosCurent) {
        auto it = find_if(toateCartile.begin(), toateCartile.end(), [&](const Carte& c) {return c.getISBN() == isbn;});

        if (it != toateCartile.end() && it->getStoc() >= nr) {
            it->setStoc(it->getStoc() - nr);
            for (int i=0; i<nr; i++) {
                cartiImprumutate.push_back(*it);
            }
        }
        else {
            cerr<<"Eroare: stoc insuficient sau carte inexistenta pentru ISBN: "<<isbn<<'\n';
        }
    }

    //Cream data curenta
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    Data dataCurenta(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);

    Imprumut imprumut (numeUtilizator, dataCurenta, cartiImprumutate);

    //Salveaza fisa de imprumut si actualizam fisierele
    GestionareFisiere::salveazaImprumut(imprumut);
    GestionareFisiere::salveazaCarti(toateCartile);
    GestionareFisiere::salveazaCos({}); //goleste cosul

    cout<<"Imprumut realizat cu succes!\n";
}
