#include <iostream>
#include "owca.h"
#include "mieszkaniec.h"
#include "smok.h"

void mieszkaniec::nadaj_imie(int n) {
    std::string s = std::to_string(n);
    this->imie = "mieszkaniec " + s;
}

void mieszkaniec::przywitaj_smoka(smok * wrog) {
    std::cout << imie << ": Witaj smoku!\n";
    wrog -> odpowiedz(imie);
}
