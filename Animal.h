#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal(){
        name="";
        age=0;
        isHungry=true;
    }
    Animal(string nam, int ag, bool hunger){
        name=nam;
        age=ag;
        isHungry=hunger;
    }
    ~Animal(){
        
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void setName(string name){
        this->name=name;
    }
  
    void setAge(int age){
        this->age=age;
    }
    virtual void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Hunger status: "<<isHungry<<endl;
    }
   bool getIsHungry(){
        return isHungry;
    }
    void feed(){
        if(isHungry==true)
        isHungry=false;
    }
    
};



#endif
