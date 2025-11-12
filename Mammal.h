#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal: public Animal{
    private:
    string furColor;
    public:
    Mammal():Animal(){
        furColor="";
    }
    Mammal(string nam, int ag, bool hunger, string Color):Animal(nam,ag,hunger){
        furColor=Color;
    }
    ~Mammal(){
        
    }
    string getFurColor(){
        return furColor;
    }
    void setFurColor(string c){
        this->furColor=c;
    }
};



#endif
