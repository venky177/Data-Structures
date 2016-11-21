#include "complex.h"

complex::complex()
{
    real=0;
    img=0;
}

complex::complex(float real, float img)
{
    this->real=real;
    this->img=img;
}

float complex::getImg()
{
    return img;
}

float complex::getReal()
{
    return real;
}

complex complex::operator +(complex c)
{
    complex tmp;
    tmp.real=real+c.real;
    tmp.img=img+c.img;
    return tmp;
}
complex complex::operator -(complex c)
{
    complex tmp;
    tmp.real=real-c.real;
    tmp.img=img-c.img;
    return tmp;
}
complex complex::operator *(complex c)
{
    complex tmp;
    tmp.real=(real*c.real-img*c.img);
    tmp.img=(real*c.img+ c.real*img);
    return tmp;
}
complex complex::operator /(complex c)
{
    complex tmp;
    float deno=(c.real*c.real)+(c.img*c.img);
    tmp.real=(real*c.real-img*c.img)/deno;
    tmp.img=(c.real*img-real*c.img)/deno;
    return tmp;
}
