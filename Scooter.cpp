//Brendan Gressel
//my own vehicle

//sets mileage
Scooter::Scooter(double m){
    mileageEstimate(m);
}

Scooter::~Scooter()=default;

//mileage starts as a random number between 0.1 and 2
//if time is over 15, mileage is doubled
//if time is over 60, mileage=5
double Scooter::mileageEstimate(double time){
    int temp;
    mileage=rand() % 20 + 1;
    mileage=mileage/10;
    if  (time >= 15 ){
        mileage= milage*2;
    }
    if  (time >= 60 ){
        mileage= 5;
    }
}
