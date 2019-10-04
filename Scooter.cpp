//Brendan Gressel
//my own vehicle

#include "Scooter.h"

//sets mileage
Scooter::Scooter(double m, string mo, string b){
    mileageEstimate(m);
    setBrand(b);
    setModel(mo);
}

Scooter::~Scooter()=default;

//mileage starts as a random number between 0.1 and 2
//if time is over 15, mileage is doubled
//if time is over 60, mileage=5
double Scooter::mileageEstimate(double time){
    time=time/60;
    int temp;
    mileage=(rand() % 20 + 1)*time;
    mileage=mileage/10;
    if  (time >= 15 ){
        mileage= mileage*2;
    }
    if  (time >= 60 ){
        mileage= 5;
    }
    return mileage;
}

string Scooter::toString() {
return "Scooter\n" + Vehicle::toString();
}
