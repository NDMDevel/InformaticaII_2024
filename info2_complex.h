#pragma once

class Complex
{
private:
    float _re;
    float _im;
public:
    Complex();
    Complex(float re,float im);
    //setters/getters
    void setRe(float re);
    void setIm(float im);
    void show();
    Complex add(Complex z);
    Complex mul(Complex z);
    Complex operator+(Complex z);
    Complex operator+(float re);
    Complex operator~();
    Complex operator/(float re);
    Complex operator*(Complex z);
    Complex operator/(Complex z);
};
