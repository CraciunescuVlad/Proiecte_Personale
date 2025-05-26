#include "Administrator.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <bits/ranges_algo.h>

using namespace std;

const string FISIER_CARTI = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/carti.txt";
const string FISIER_IMPRUMUTURI = "imprumuturi.txt";

//Metoda care incarca toate cartile din fisier
vector<Carte> Administrator::incarcaCarti() const {
    ifstream fin("D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/carti.txt");
    vector<Carte> carti;

    if (!fin.is_open()) {
        cerr<<"Eroare la deschiderea fisierului carti.txt\n";
        return carti;
    }

    int n;
    fin>>n;
    fin.ignore();
    for (int i=0; i<n; i++) {
        string isbn, titlu, autor;
        int stoc;
        getline(fin, isbn);
        getline(fin, titlu);
        getline(fin, autor);
        fin>>stoc;
        fin.ignore();
        carti.emplace_back(isbn, titlu, autor, stoc);
    }
    return carti;
}


//Salveaza toate cartile din fisier
void Administrator::salveazaCarti(const vector<Carte> &carti) const {
    ofstream fout(FISIER_CARTI);
    fout<<carti.size()<<'\n';
    for (const auto& carte:carti) {
        fout<<carte.getISBN()<<'\n'
            <<carte.getTitlu()<<'\n'
            <<carte.getAutor()<<'\n'
            <<carte.getStoc()<<'\n';
    }
}


//Vizualizeaza carti
void Administrator::vizualizareCarti() const {
    auto carti = incarcaCarti();
    for (const auto& c : carti) {
        cout<<"ISBN: "<< c.getISBN()
            <<" | Titlu: "<<c.getTitlu()
            <<" | Autor: "<<c.getAutor()
            <<" | Stoc: "<<c.getStoc()<<endl;
    }
}

void Administrator::adaugaCarte(const Carte &carte) {
    auto carti = incarcaCarti();
    carti.push_back(carte);
    salveazaCarti(carti);
}

void Administrator::stergeCarte(const string &isbn) {
    auto carti = incarcaCarti();
    for (auto it = carti.begin(); it != carti.end();) {
        if (it->getISBN() == isbn) {
            it = carti.erase(it);
        }
        else {
            it++;
        }
    }
    salveazaCarti(carti);
}

//Modifica stocul unei carti
void Administrator::modificaStoc(const string &isbn, int nouStoc) {
    auto carti = incarcaCarti();
    for (auto& c : carti) {
        if (c.getISBN() == isbn) {
            c.setStoc(nouStoc);
            break;
        }
    }
    salveazaCarti(carti);
}

//Vizualizeaza fisele de imprumut
void Administrator::vizualizeazaImprumuturi() const {
    ifstream fin(FISIER_IMPRUMUTURI);
    if (!fin.is_open()) {
        cerr<<"Eroare la deschiderea fisierului imprumuturi.txt";
        return;
    }
    string linie;
    while (getline(fin, linie)) {
        cout<<linie<<"\n";
    }
}
