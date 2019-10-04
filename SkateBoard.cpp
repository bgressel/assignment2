//Brendan Gressel

#include "SkateBoard.h"
#include <stdlib.h>

SkateBoard::SkateBoard(double m, string mo, string b){
    mileageEstimate(m);
    setBrand(b);
    setModel(mo);
}

SkateBoard::~SkateBoard()=default;

//gets random number and makes it a decimal then follows conditions
double SkateBoard::mileageEstimate(double time){
    int temp, x;
    mileage=(rand() % 5 + 1)*time;
    mileage=mileage/10;
    if  (time >= 25 && time<=250){
        time = time/3;
        x=time;
        temp = rand() % x + 1;
        mileage= mileage + temp;
    }
    return mileage;
}

string SkateBoard::toString() {
    return "SkateBoard\n" + Vehicle::toString();
}
