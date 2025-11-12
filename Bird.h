#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird: public Animal{
    private:
   float wingSpan;
   
    public:
    
    Bird():Animal(){
        wingSpan=0;
    }
    
    Bird(string nam, int ag, bool hunger, float span):Animal(nam,ag,hunger){
        wingSpan=span;
    }
    ~Bird(){};
    
    float getWingSpan(){
        return wingSpan;
    }
    
    void setWingSpan(float w){
        this->wingSpan=w;
    }
};




#endif
