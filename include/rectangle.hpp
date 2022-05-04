#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include <iostream>

class PersegiPanjang 
{
    private: 
       float xmax, xmin, ymin, ymax;

    public:
        PersegiPanjang(float tengahx, float tengahy, float panjang, float lebar);

    PersegiPanjang operator+(PersegiPanjang);
    PersegiPanjang operator-(PersegiPanjang);
    void operator++();
    void operator--();
    void operator++(int);
    void operator--(int);
    float operator[](int input);
    void output();
    bool operator==(PersegiPanjang);
    
};




#endif