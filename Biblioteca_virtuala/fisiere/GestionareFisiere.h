#ifndef GESTIONAREFISIERE_H
#define GESTIONAREFISIERE_H

#include <vector>
#include <map>
#include <string>
#include "D:\Facultate\Anu 1\Semestrul 2\Biblioteca_virtuala\administrator/Carte.h"
#include "D:\Facultate\Anu 1\Semestrul 2\Biblioteca_virtuala\utilizator/Data.h"
#include "D:\Facultate\Anu 1\Semestrul 2\Biblioteca_virtuala\utilizator/Imprumut.h"
using namespace std;


class GestionareFisiere {
public:
    //Carti
    static vector<Carte> incarcaCarti(const string& numeFisier = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/carti.txt");
    static void salveazaCarti(const vector<Carte>& carti, const string& numeFisier = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/carti.txt");

    //Cos
    static map<string, int> incarcaCos(const string& numeFisier = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/cos_utilizator");
    static void salveazaCos(const map<string, int>& cos, const string& numeFisier = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/cos_utilizator");

    //Imprumut
    static void salveazaImprumut(const Imprumut& imprumut, const string& numeFisier = "D:/Facultate/Anu 1/Semestrul 2/Biblioteca_virtuala/imprumuturi.txt");
};



#endif //GESTIONAREFISIERE_H
