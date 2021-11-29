#include "../headers/vehicle.h"
#include <string>
int vehicle::getwNumber() const {return wNumber;}
int vehicle::getYear() const {return year;}
std::string vehicle::getwColor() const {return wColor;}


void vehicle::setwNumber(int &n){wNumber = n;}
void vehicle::setYear(int &y){year = y;}
void vehicle::setwColor(std::string &c){wColor = c;}


