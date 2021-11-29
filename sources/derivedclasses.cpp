#include "../headers/derivedclasses.h"
#include "../headers/vehicle.h"
#include <iostream>

Bicycle::Bicycle()
{
    bicycleType = "";
    year = 0;
    wNumber = 2;
    wColor = "";
}

Bicycle::Bicycle(int y, std::string c, std::string t)
{
    year = y;
    wColor = c;
    bicycleType = t;
    wNumber = 2;
}

std::ostream &operator << (std::ostream &stream , const Bicycle& b)
{
    stream << "Year: " << b.getYear() <<"; Color: " << b.getwColor() << "; Type: "<<b.bicycleType;
    return stream;
}

std::istream &operator >> (std::istream &is , Bicycle& b)
{
    is >> b.year >> b.wColor >> b.bicycleType;
    return is;
}

std::ostream &operator <<(std::ostream& os , const hybrid& h)
{
    os << "Year: "<< h.getYear() <<"; Wheel #: "<<h.getwNumber() <<"; Color: "<<h.getwColor()
    << "; Battery Life: " << h.batteryLife <<"km; Cylinder Volume: "<< h.cylinderVolume <<"cm3;";
    return os;
}

std::istream &operator >> (std::istream &is ,hybrid& h)
{
    is >> h.year >> h.wNumber >> h.wColor >> h.batteryLife >> h.cylinderVolume;
    return is;
}
hybrid::hybrid(int y, int n, std::string c, double life, double vol)
{
    year = y;
    wNumber = n;
    wColor = c;
    batteryLife = life;
    cylinderVolume = vol;
}
hybrid::hybrid()
{
    year = 0;
    wNumber = 0;
    wColor = "";
    batteryLife = 0;
    cylinderVolume = 0;
}
bool hybrid::operator< (const hybrid&h1)
{
    return year < h1.year;
}
bool Bicycle::operator<(const Bicycle&b1)
{
    return year < b1.year;
}

// bool compareb(const Bicycle& b1, const Bicycle& b2)
// {
//     return b1.year < b2.year;
// }

// bool compareh(const hybrid& h1, const hybrid& h2)
// {
//     return h1.year < h2.year;
// }