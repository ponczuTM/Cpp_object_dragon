
#ifndef SMOK_H
#define SMOK_H


#include "owca.h"
#include <string>
class smok {
public:
    std::string nazwa = "Smok";
    int ilosc_zjedzonej_siarki = 0;

    void odpowiedz(std::string);
    void zjedz(owca);
    void zjadlem(owca);

private:
    int zjadlem_siarki = 0;
};



#endif

