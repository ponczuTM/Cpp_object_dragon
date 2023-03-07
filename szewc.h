

#ifndef SZEWC_H
#define SZEWC_H

#include "smok.h"
#include "mieszkaniec.h"

class szewc: public mieszkaniec {
public: std::string nazwa = "Szewc";
    std::vector < owca > stado;
    void dodaj_owce(int);
    void przygotuj(int);
    void nakarm(smok * );
};


#endif

