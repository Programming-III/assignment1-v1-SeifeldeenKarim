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
        animals=nullptr;}
        
        
        
 Enclosure(int cap,int curr){
            capacity=cap;
            currentCount=curr;
animals=new Animal[cap];   }
~Enclosure(){
    
}

void addAnimal(Animal* a){
    if(currentCount<capacity)
    animals[currentCount]= a;
    else
    cout<<"no space"<<endl;
}
void displayAnimals(){
    if(currentCount==0)
    cout<<"no animals"<<endl;
    else
    for(int i=0; i<currentCount; i++){
        cout<<animals[i].display()<<endl;
    }
}

    

};





#endif
