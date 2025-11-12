#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

Animal::Animal() {
    name = "";
    age = 0;
    isHungry = false;
}


Animal::Animal(string n, int a, bool h) {
    name = n;
    age = a;
    isHungry = h;
}

Animal::~Animal() {}

string Animal::getName() const {
    return name;
}


int Animal::getAge() const {
    return age;
}

bool Animal::getIsHungry() const {
    return isHungry;
}

void Animal::setName(string n) {
    name = n;
}



void Animal::setAge(int a) {
    age = a;
}


void Animal::setIsHungry(bool h) {
    isHungry = h;
}


void Animal::display() const {
    cout << name << " (Age: " << age << ", ";
    if (isHungry == true) {
        cout << "Hungry";
    }
    else {
        cout << "Not Hungry";
    }
    cout << ")" << endl;
}

void Animal::feed() {
    isHungry = false;
}

Mammal::Mammal() : Animal() {
    furColor = "";
}


Mammal::Mammal(string n, int a, bool h, string color) : Animal(n, a, h) {


    furColor = color;
}


Mammal::~Mammal() {}


void Mammal::display() const {
    cout << getName() << " (Age: " << getAge() << ", ";
    if (getIsHungry() == true) {
        cout << "Hungry";
    } else {

        cout << "Not Hungry";
    }


    cout << ")" << endl;
}

Bird::Bird() : Animal() {
    wingSpan = 0.0f;

}


Bird::Bird(string n, int a, bool h, float w) : Animal(n, a, h) {
    wingSpan = w;
}

Bird::~Bird() {}

void Bird::display() const {
    cout << getName() << " (Age: " << getAge() << ", ";
    if (getIsHungry() == true) {
        cout << "Hungry";
    } else {
        cout << "Not Hungry";
    }


    cout << ")" << endl;
}

Reptile::Reptile() : Animal() {
    isVenomous = false;
}

Reptile::Reptile(string n, int a, bool h, bool venom) : Animal(n, a, h) {
    isVenomous = venom;
}


Reptile::~Reptile() {}


void Reptile::display() const {
    cout << getName() << " (Age: " << getAge() << ", ";
    if (isVenomous == true) {
        cout << "Venomous, ";
    }
    if (getIsHungry() == true) {
        cout << "Hungry";
    } else {
        cout << "Not Hungry";
    }
    cout << ")" << endl;
}



Enclosure::Enclosure(int cap) {
    capacity = cap;
    currentCount = 0;
    animals = new Animal*[capacity];
}


Enclosure::~Enclosure() {
    for (int i = 0; i < currentCount; i++) {
        delete animals[i];
    }

    delete[] animals;
}

void Enclosure::addAnimal(Animal* a) {

    if (currentCount < capacity) {
        animals[currentCount] = a;
        currentCount++;
    }

}

void Enclosure::displayAnimals() const {

    cout << "Enclosure 1 Animals:" << endl;
    for (int i = 0; i < currentCount; i++) {
        animals[i]->display();
    }

    cout << endl;
}

Visitor::Visitor() {

    visitorName = "";
    ticketsBought = 0;

}



Visitor::Visitor(string name, int tickets) {
    visitorName = name;
    ticketsBought = tickets;
}

Visitor::~Visitor() {}

void Visitor::displayInfo() const {
    cout << "Visitor Info:" << endl;
    cout << "Name: " << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}

int main() {
    Enclosure e1(5);

    Animal* a1 = new Mammal("Lion", 5, true, "Golden");
    Animal* a2 = new Bird("Parrot", 2, false, 0.5f);
    Animal* a3 = new Reptile("Snake", 3, true, true);

    e1.addAnimal(a1);
    e1.addAnimal(a2);
    e1.addAnimal(a3);

    e1.displayAnimals();

    Visitor v1("Sarah Ali", 3);
    v1.displayInfo();

    return 0;
}
