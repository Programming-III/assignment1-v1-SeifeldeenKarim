#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
    private:
    Animal* animals;
    int capacity;
    int currentCount;
    public:
    Enclosure(){
        capacity=0;
        currentCount=0;
        animals=nullptr;
        Enclosure(int cap,int curr){
            capacity=cap;
            curr
        }
    }
};






#endif
