//Brendan Gressel

#ifndef SkateBoard_h
#define SkateBoard_h

#include "Vehicle.h"

class SkateBoard : public Vehicle {
    
private:
    double mileage;
    string model;
    string brand;
    
public:
    explicit SkateBoard(double m, string mo, string b);
    
    virtual ~SkateBoard();
    virtual double mileageEstimate(double time);
    virtual string toString();
    
    
};
#endif /* SkateBoard_h */
