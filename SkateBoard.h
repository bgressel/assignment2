//Brendan Gressel

#ifndef SkateBoard_h
#define SkateBoard_h

#include "Vehicle.h"

class SkateBoard : public Vehicle {
    
private:
    double mileage;
    
public:
    explicit SkateBoard(double m);
    
    virtual ~SkateBoard();
    virtual double mileageEstimate(double time);
};
#endif /* SkateBoard_h */
