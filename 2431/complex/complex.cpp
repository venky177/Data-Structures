#include "complex.h"

complex complex::operator +(complex& c)
{
    complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;

    return temp;
}


complex complex::operator -(complex& c)
{
    complex temp;
    temp.real=real-c.real;
    temp.img=img-c.img;

    return temp;
}

complex complex::operator *(complex& c)
{
   complex temp;
   temp.real=c.real*real-c.img*img;
   temp.img=real*c.img+img*c.real;


    return temp;
}

complex operator /(complex& c1,complex& c2)
{

    float d=c2.real*c2.real +c2.img*c2.img;
    c1.real=(c1.real*c2.real)/d ;
    c1.img=(c1.real*c2.img)/d;

    return c1;
}
