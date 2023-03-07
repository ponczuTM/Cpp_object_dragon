
#include "szewc.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
void szewc::przygotuj(int nr_owcy) {
    int siarka;
    siarka = rand() % 5;
    siarka = siarka + 1; //aby nie bylo sytuacji, ze owca ma 0 siarki
    //siarka=20;
    if (nr_owcy < stado.size()) {
        stado[nr_owcy].zaladuj(siarka);
    } else {
        std::cout << "nie istnieje owca o podanym numerze\n";
    }
}

void szewc::nakarm(smok * zly_smok) {
    std::cout << nazwa << ": Witaj smoku, masz tu owieczki!\n";
    for (int i = 0; i < stado.size(); ++i) {
        przygotuj(0);
        zly_smok -> zjedz(stado[0]);
        zly_smok -> zjadlem(stado[0]);
        stado.erase(stado.begin());
        if (zly_smok -> ilosc_zjedzonej_siarki >= 20) {
            return;
        }
    }
    std::cout << nazwa << ": cholera... skonczyly mi sie owce, co teraz?\n";
}

void szewc::dodaj_owce(int n) {
    owca pusta;
    for (int i = 0; i < n; ++i) {
        stado.push_back(pusta);
    }
}
