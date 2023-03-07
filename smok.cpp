
#include <iostream>
#include "smok.h"

void smok::odpowiedz(std::string imie) {
    if (ilosc_zjedzonej_siarki < 20) {
        std::cout << nazwa << ": Arrr! Gin mieszkancu!\n";
        std::cout << imie << ": auuuu!\n";
    } else {
        std::cout << nazwa << ": pfff....\n";
    }
}

void smok::zjedz(owca bron) {
    ilosc_zjedzonej_siarki += bron.ilosc_siarki;
    if (ilosc_zjedzonej_siarki >= 10 && ((ilosc_zjedzonej_siarki - bron.ilosc_siarki) < 10)) {
        std::cout << nazwa << ": najadlem sie, jestem lakomy zjadlem " << ilosc_zjedzonej_siarki << " kg siarki\n";
    } else if (ilosc_zjedzonej_siarki >= 20) {
        std::cout << nazwa << ": padam...     \n(smok padl, bo " << ilosc_zjedzonej_siarki << " kg siarki zjadl)\n";
    } else {
        std::cout << nazwa << ": Mniam, zjadlem " << ilosc_zjedzonej_siarki << " kg siarki\n";
    }
}

void smok::zjadlem(owca bron) {
    zjadlem_siarki += bron.ilosc_siarki;
}




