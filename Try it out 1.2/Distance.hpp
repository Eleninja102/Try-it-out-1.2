//
//  Distance.hpp
//  Try it out 1.2
//
//  Created by Coleton Watt on 1/11/22.
//

#ifndef Distance_hpp
#define Distance_hpp

#include <iostream>
using namespace std;
 
class Distance {
  private:
     int feet;
     int inches;
     void adjustDist();
 
  public:
     //Default Constructor
     Distance() ;
     //Overloaded Constructor
     Distance(int f, int i = 0);
     //Overloaded Operator
     Distance operator+(const Distance&);
     //Insertion Operator
     friend ostream &operator<<( ostream &output, const Distance &D );
     //Extraction Operator
     friend istream &operator>>( istream  &input, Distance &D );
    
    Distance operator-(const Distance&);

};

#endif /* Distance_hpp */
