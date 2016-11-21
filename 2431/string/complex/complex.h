#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
    float real,img;
public:
    complex();
    complex(float real,float img);
    float getReal();
    float getImg();

    complex operator+(complex c);
    complex operator-(complex c);
    complex operator*(complex c);
    complex operator/(complex c);

};

#endif // COMPLEX_H
