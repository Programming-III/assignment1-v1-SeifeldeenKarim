#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile: public Animal{
    private:
  bool isVenomous;
   
    public:
    
    Reptile():Animal(){
        isVenomous=false;
    }
    
    Reptile(string nam, int ag, bool hunger, bool venom):Animal(nam,ag,hunger){
        isVenomous=venom;
    }
    ~Reptile(){
        
    }
    
    bool getIsVenomous(){
        return isVenomous;
    }
    
    void setIsVenomous(bool v){
        this->isVenomous=v;
    }
};







#endif
