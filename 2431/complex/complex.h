#ifndef COMPLEX_H
#define COMPLEX_H

#include<math.h>



class complex  {
public:
    double real;
    double img;


public:
   complex operator +(complex&);
   complex operator -(complex&);
   complex operator *(complex&);
   friend complex operator /(complex&,complex&);
};

#endif // COMPLEX_H
