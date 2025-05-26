#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include <vector>
#include "Carte.h"
using namespace std;

class Administrator {
public:
    Administrator() = default;
    void vizualizareCarti() const;
    void adaugaCarte(const Carte &carte);
    void stergeCarte(const string &isbn);
    void modificaStoc(const string &isbn, int nouStoc);
    void vizualizeazaImprumuturi() const;
private:
    vector<Carte> incarcaCarti() const;
    void salveazaCarti(const vector<Carte>& carti) const;
};



#endif //ADMINISTRATOR_H
