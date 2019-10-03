//Brendan Gressel

#ifndef Scooter_h
#define Scooter_h

#include "Vehicle.h"

class Scooter : public Vehicle {
    
private:
    double mileage;
    
public:
    explicit Scooter(double m);
    
    virtual ~Scooter();
    virtual double mileageEstimate(double time);
};

#endif /* Scooter_h */
