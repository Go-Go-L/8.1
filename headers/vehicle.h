#include <string>
#ifndef VEHICLE_H
#define VEHICLE_H
class vehicle
{
protected:
    std::string wColor;
    int wNumber;
    int year;
public:
    int getwNumber() const;
    int getYear() const;
    std::string getwColor() const;
    void setwNumber(int &);
    void setYear(int &);
    void setwColor(std::string &);
};
#endif