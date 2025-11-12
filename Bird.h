#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"

class Bird : public Animal {
private:
    float wingSpan;
public:
    Bird();
    Bird(string n, int a, bool hungry, float w);
    ~Bird();
    void display() const override;
};

#endif
