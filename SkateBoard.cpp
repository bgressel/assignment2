//Brendan Gressel

#include <SkateBoard.h>
#include <stdlib.h>

SkateBoard::SkateBoard(double m, string mo, string b){
    mileageEstimate(m);
    setBrand(b);
    setModel(mo);
}

SkateBoard::~SkateBoard()=default;

//gets random number and makes it a decimal then follows conditions
void SkateBoard::mileageEstimate(double time){
    int temp;
    mileage=rand() % 5 + 1;
    mileage=mileage/10;
    if  (time >= 25 && time<=250){
        time = time/3;
        temp = rand() % time + 1
        mileage= milage + temp;
    }
}

string SkateBoard::toString() {
    return "SkateBoard\n" + Vehicle::toString();
}
