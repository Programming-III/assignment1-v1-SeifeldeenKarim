#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    
    public:
    Visitor(){
        visitorName="";
        ticketsBought=0;
    }
    Visitor(string n, int tb){
        visitorName=n;
        ticketsBought=tb;
    }
    ~Visitor(){
        
    }
    
    string getVisitorName(){
        return visitorName;
    }
    
    int getTicketsBought(){
        return ticketsBought;
    }
    void setTicketsbought(int tb){
        this->ticketsBought=tb;
    }
    void setVisitorName(string na){
        this->visitorName=na;
    }
    void displayInfo(){
        cout<<"name: "<<visitorName<<endl;
        cout<<"tickets: "<<ticketsBought<<endl;
    }
    
    
};





#endif
