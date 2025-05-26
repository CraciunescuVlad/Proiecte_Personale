#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <string>
#include "Cos.h"
using namespace std;

class Utilizator {
private:
    Cos cos;
public:
    Utilizator();

    void vizualizareCos() const;
    void adaugaCarte(const string& isbn, int nr);
    void modificaCarte(const string& isbn, int nouNr);
    void stergeCarte(const string& isbn);
    void imprumuta(const string& numeUtilizator);
};



#endif //UTILIZATOR_H
