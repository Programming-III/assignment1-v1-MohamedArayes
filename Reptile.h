#ifndef REPTILE_H
#define REPTILE_H
#include "Animal.h"

class Reptile : public Animal {
private:
    bool isVenomous;
public:
    Reptile();
    Reptile(string n, int a, bool hungry, bool venom);
    ~Reptile();
    void display() const override;
};

#endif
