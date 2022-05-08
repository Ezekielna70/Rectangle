#include <iostream>
#include "include/rectangle.hpp"



void PersegiPanjang::output()
{
    float panjang = this->xmax - this->xmin;
    float lebar = this->ymax - this->ymin;
    std::cout << "\nTitik tengah x    : " << this->xmax - (panjang / 2) << "\n";
    std::cout << "Titik tengah y    : " << this->ymax - (lebar / 2) << "\n";
    std::cout << "Panjang   : " << panjang << "\n";
    std::cout << "Lebar     : "<< lebar << "\n";
    std::cout << "X maksimum    : "<< this->xmax <<"\n";
    std::cout << "Y maksimum    : "<< this->ymax <<"\n";
    std::cout << "X minimum    : "<< this->xmin <<"\n";
    std::cout << "Y minimum    : "<< this->ymin <<"\n\n";


}


PersegiPanjang::PersegiPanjang(float tengahx, float tengahy, float panjang, float lebar)
{
    this->xmax = tengahx + panjang/2;
    this->xmin = tengahx - panjang/2;
    this->ymax = tengahy + lebar/2;
    this->ymin = tengahy - lebar/2;

}

PersegiPanjang PersegiPanjang::operator+(PersegiPanjang kotak)
{
    if(*this == kotak)
    {
        PersegiPanjang plus (0, 0, 0, 0);

        plus.xmax = std::max(this->xmax, kotak.xmax);
        plus.ymax = std::max(this->ymax, kotak.ymax);
        plus.xmin = std::min(this->xmin, kotak.xmin);
        plus.ymin = std::min(this->ymin, kotak.ymin);

        return plus;
    }
}

PersegiPanjang PersegiPanjang::operator-(PersegiPanjang kotak)
{
    if(*this == kotak)
    {
        PersegiPanjang minus (0, 0, 0, 0);

        minus.xmax = std::min(this->xmax, kotak.xmax);
        minus.ymax = std::min(this->ymax, kotak.ymax);
        minus.xmin = std::max(this->xmin, kotak.xmin);
        minus.ymin = std::max(this->ymin, kotak.ymin);

        return minus;
    }
}

void PersegiPanjang::operator++()
{
    float panjang = this->xmax - this->xmin;
    float lebar = this->ymax - this->ymin;
    float temp_panjang = panjang * 2;
    float temp_lebar = lebar * 2;
    float titikx = panjang/2 + this->xmin;
    float titiky = lebar/2 + this->ymin;

    //float luas = temp_panjang * temp_lebar;

    this->xmax = titikx + (temp_panjang/2);
    this->ymax = titiky + (temp_lebar/2);
    this->xmin = titikx - (temp_panjang/2);
    this->ymin = titikx - (temp_lebar/2);

}
void PersegiPanjang::operator++(int){}

void PersegiPanjang::operator--()
{
    float panjang = this->xmax - this->xmin;
    //panjang = abs(panjang);
    float lebar = this->ymax - this->ymin;
    //lebar = abs(lebar);
    float titikx = panjang/2 + this->xmin;
    float titiky = lebar/2 + this->ymin;
    float temp_panjang = panjang / 2;
    float temp_lebar = lebar / 2;

    //float luas = temp_panjang * temp_lebar;

    this->xmax = titikx + (temp_panjang/2);
    this->ymax = titiky + (temp_lebar/2);
    this->xmin = titikx - (temp_panjang/2);
    this->ymin = titikx - (temp_lebar/2);
}
void PersegiPanjang::operator--(int){}

bool PersegiPanjang::operator==(PersegiPanjang equal)
{
    if(((this->xmin<equal.xmin && equal.xmin < this->xmax) || (this->xmin<equal.xmax && equal.xmax < this->xmax))
        && ((this->ymin<equal.ymin && equal.ymin < this->ymax) || (this->ymin<equal.ymax && equal.ymax < this->ymax)))
        {
            return true;
        }
    else
    {
        //std::cout << "\nKedua Segi empat tidak beririsan\n";
        return false;
    }
}

float PersegiPanjang::operator[](int input)
{
    switch(input)
    {
        case 1: 
            return this->xmax;
            break;
        case 2:
            return this->xmin;
            break;
        case 3:
            return this->ymax;
            break;
        case 4:
            return this->ymin;
            break;
    }
}



