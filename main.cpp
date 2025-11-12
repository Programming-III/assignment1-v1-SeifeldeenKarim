#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    
  Enclosure e(10, 5);
   Mammal a=new Animal("JHON", 5, true, "red");
   Bird b=new Animal("jac", 6 , true, 10);
   Reptile c = new Animal("jo", 6 , false, true);
   e.addAnimal(&a);
    e.addAnimal(&b);
     e.addAnimal(&c);
Visitor v("nick", 3);
v.displayInfo();
e.displayAnimals();
    return 0;
}
