#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "owca.h"
#include "smok.h"
#include "mieszkaniec.h"
#include "szewc.h"


using namespace std;
int main() {

    srand(time(NULL));
    smok zly_smok;
    smok * Smok;
    Smok = new smok();
    owca * stado_owiec;
    stado_owiec = new owca[99];
    int ilosc, raz = 1;
    cout << "podaj ilosc owiec\n(jesli podasz 20 lub wiecej, smok na pewno zginie) :  ";
    cin >> ilosc;
    ilosc *= 2;
    szewc bohater;
    bohater.dodaj_owce(ilosc);
    mieszkaniec mieszkancy[6];
    for (int i = 0; i < 6; ++i) {
        mieszkancy[i].nadaj_imie(i + 1);
    }
    cout << "--------------------------------\n\n" << endl;
    for (int i = 0; i <= 5; i++) {
        if (raz == 1) {
            mieszkancy[i].przywitaj_smoka( & zly_smok);
            bohater.nakarm( & zly_smok);
            raz = 0;
        } else {
            mieszkancy[i].przywitaj_smoka( & zly_smok);
        }
    }

    if (zly_smok.ilosc_zjedzonej_siarki < 20) {
        cout << "\n\n" << zly_smok.nazwa << " zjadl za malo siarki\nprzezyl\nwioska zostala spalona\nkurtyna\n";
    } else if (zly_smok.ilosc_zjedzonej_siarki >= 20 && bohater.stado.size() == 0) {
        cout << "\n\n" << zly_smok.nazwa << " zdechl\nniestety, " << zly_smok.nazwa << " zjadl wszystkie owce\nnie zostalo ani jednej w miescie\nszewc nie mial owiec, aby pozyskac z nich ponownie siarke\nzapanowala bieda, mieszkancy zaczeli sie buntowac\nkurtyna\n";
    } else {
        cout << "\n\n" << zly_smok.nazwa << " zdechl. \nszewc poslubil corke krola\nale doszlo do malej pomylki....\nna uczcie weselnej podano pozostale owce...\nwszyscy umarli szybko i szczesliwie\nkurtyna\n";
    }
    return 0;
}

