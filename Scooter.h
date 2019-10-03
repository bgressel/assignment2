//Brendan Gressel

#ifndef Scooter_h
#define Scooter_h

#include "Vehicle.h"

class Scooter : public Vehicle {
    
private:
    double mileage;
    string model;
    string brand;
    
public:
    explicit Scooter(double m, string mo, string b);
    
    virtual ~Scooter();
    virtual double mileageEstimate(double time);
    
    virtual string toString();
};

#endif /* Scooter_h */
