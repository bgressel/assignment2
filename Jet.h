//Brendan Gressel, Jet header

#ifndef Jet_h
#define Jet_h

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
    
private:
    int numberofEngines;
    double mileage;
    string fuelType;
    
public:
    Jet(); //defualts constucter
    
    explicit Jet(int e, double m, string fuelType); //sets all the private variables
    
    virtual ~Jet();
    
    void setEngines(int e); //sets engines
    virtual double mileageEstimate(double x); //sets mileage
    virtual string toString();
};
#endif /* Jet_h */
