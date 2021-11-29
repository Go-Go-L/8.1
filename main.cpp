#include <iostream>
#include <vector>
#include "headers/derivedclasses.h"
#include <algorithm>
using namespace std;
int main() {
  cout << "Insertion for Bicycle:\nyear,color,type\n";
  Bicycle b;
  cin >> b;
  cout << b << endl;
  
  cout << "\nInsertion for Hybrid:\nyear,number of wheels,color,battery life,cylinder volume\n";
  hybrid h;
  cin >> h;
  cout << h << endl;
  
  //~ Available bikes
  vector<Bicycle> bikes;
  bikes.push_back(Bicycle(2012, "red", "mountain"));
  bikes.push_back(Bicycle(2005, "yellow", "racing"));
  bikes.push_back(Bicycle(2012, "red", "mountain"));    //another identical bike (not the same bike)
  
  sort(bikes.begin(), bikes.end());
  
  cout << "\nBikes:\n";
  for(auto b: bikes)
    cout << b << endl;
    
  //Hybrid vehicles
  vector<hybrid> hv;
  hv.push_back(hybrid(2018, 4, "blue", 1800, 100));
  hv.push_back(hybrid(2016, 4, "green", 1600, 120));
  hv.push_back(hybrid(2016, 4, "black", 1900, 90));
  
  sort(hv.begin(), hv.end());
  cout << "\nHybrid vehicles:\n";
  for(auto h: hv)
    cout << h << endl;
  return 0; 
}
