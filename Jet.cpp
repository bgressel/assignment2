//Brendan Gressel
#include "Jet.h"

Jet::Jet(){
    setMileage(0);
    setFuelType("unknown");
    //number of engines is already set
}

//sets all values if they are passed in
Jet::Jet(int e, double m, string fuelType){
    setEngines(e);
    setMileage(m);
    setFuelType(fuelType);
}

Jet::~Jet()=default;

//checks for the condition that the number of engines is above 2 and fuelType is Rocket
void Jet::setEngines(int e){
    numberofEngines=e;
    if (e>2 && fuelType=="Rocket")
        mileage = mileage + (mileage * 0.055);
}

//sets milage and makes sure it follows conditions
void Jet::setMileage(int x){
    if  (x >= 40 && x<=100)
        mileage=x;
}
