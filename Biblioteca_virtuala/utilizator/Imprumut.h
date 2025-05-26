#ifndef IMPRUMUT_H
#define IMPRUMUT_H
#include <vector>
#include <string>
#include "D:\Facultate\Anu 1\Semestrul 2\Biblioteca_virtuala\administrator/Carte.h"
#include "D:\Facultate\Anu 1\Semestrul 2\Biblioteca_virtuala\utilizator/Data.h"
using namespace std;


class Imprumut {
private:
    vector<Carte> carti;
    Data data;
    string numeUtilizator;
public:
    Imprumut();
    Imprumut(const string& numeUtilizator, const Data& data, const vector<Carte>& carti);

    string getNumeUtilizator() const;
    Data getData() const;
    vector<Carte> getCarti() const;

    void setNumeUtilizator(const string& nume);
    void setData(const Data& data);
    void setCarti(const vector<Carte>& carti);

    void afisare() const;
};


#endif //IMPRUMUT_H
