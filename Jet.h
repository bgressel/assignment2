//Brendan Gressel, Jet header

#ifndef Jet_h
#define Jet_h

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
    
private:
    int numberofEngines=1;
    double mileage;
    string fuelType;
    
public:
    Jet(); //defualts constucter
    
    explicit Jet(int e, double m, string fuelType); //sets all the private variables
    
    virtual ~Jet();
    
    void setEngines(int e); //sets engines
    virtual void mileageEstimate(double x); //sets mileage
};
#endif /* Jet_h */
