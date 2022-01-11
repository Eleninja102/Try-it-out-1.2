//
//  Distance.cpp
//  Try it out 1.2
//
//  Created by Coleton Watt on 1/11/22.
//

#include "Distance.hpp"


Distance::Distance() {
   feet = 0;
   inches = 0;
}
Distance::Distance(int f, int i) {
  feet = f;
  inches = i;
  adjustDist();
}
void Distance::adjustDist(){
if(inches > 12){
  int addFeet = inches / 12;
  feet += addFeet;
  inches %= 12;
}
}
Distance Distance::operator+(const Distance& d){
Distance dist;
dist.inches = inches + d.inches;
dist.feet = feet + d.feet;
adjustDist();
return dist;
}
ostream &operator<<( ostream &out, const Distance &d ) {
  out << "Feet: " << d.feet << " Inches : " << d.inches;
  return out;
}

istream &operator>>( istream  &input, Distance &d ) {
    cout << "Insert distance:\n";
  input >> d.feet >> d.inches;
  return input;
}

Distance Distance::operator-(const Distance& d){
Distance dist;
dist.inches = inches - d.inches;
dist.feet = feet - d.feet;
adjustDist();
return dist;
}
