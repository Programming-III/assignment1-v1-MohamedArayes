#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string n, int a, bool hungry);
    virtual ~Animal();

    string getName() const;
    int getAge() const;
    bool getIsHungry() const;

    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool h);

    virtual void display() const;
    virtual void feed();
};

#endif
