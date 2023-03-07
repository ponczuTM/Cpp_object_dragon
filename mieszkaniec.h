
#ifndef MIESZKANIEC_H
#define MIESZKANIEC_H


#include <vector>
#include "smok.h"

class mieszkaniec {
public:
    std::string imie = "mieszkaniec";

    void przywitaj_smoka(smok * );
    void nadaj_imie(int);
};


#endif

