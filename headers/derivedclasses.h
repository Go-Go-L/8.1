#include <string>
#include "vehicle.h"
#ifndef DERIVEDCLASSES_H
#define DERIVEDCLASSES_H
class InternalCombustion : virtual public  vehicle
{
protected:
    double cylinderVolume;
    
public:
};

class  Electric : virtual public vehicle
{
protected:
    double batteryLife;
public:
};


class Bicycle : public vehicle
{
private:
    std::string bicycleType;
public:
    Bicycle();
    Bicycle(int year,std::string color, std::string type );
    friend std::istream &operator>>(std::istream&, Bicycle&);
    friend std::ostream &operator<<(std::ostream&, const Bicycle&);
    //friend bool compareb(const Bicycle& , const Bicycle&);
    bool operator<(const Bicycle&b1);
};

class hybrid : public Electric , InternalCombustion
{
private:
    
public:
    hybrid();
    hybrid(int, int, std::string, double, double);
    friend std::istream &operator>>(std::istream&, hybrid&);
    friend std::ostream &operator <<(std::ostream& , const hybrid&);
    bool operator<(const hybrid&h1);
    //friend bool compareh(const hybrid& h1 , const hybrid& h2);

};

#endif