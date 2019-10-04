//Brendan Gressel
#include "Jet.h"
#include <stdlib.h>

Jet::Jet(){
    mileageEstimate(0);
    setFuelType("unknown");
    numberofEngines=1;
    //number of engines is already set
}

//sets all values if they are passed in
Jet::Jet(int e, double m, string fuelType){
    setEngines(e);
    mileageEstimate(m);
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
double Jet::mileageEstimate(double x){
    mileage=(rand() % 60 + 40)*x;
    if (fuelType == "Rocket" && numberofEngines>2)
       mileage = mileage + (mileage * 0.055);
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString();
}
