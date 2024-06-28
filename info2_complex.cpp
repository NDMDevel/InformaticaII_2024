#include "info2_complex.h"
#include <iostream>

Complex::Complex()
{
    _re = 0;
    _im = 0;
}
Complex::Complex(float re,float im)
{
    _re = re;
    _im = im;
}
void Complex::setRe(float re)
{
    _re = re;
}
void Complex::setIm(float im)
{
    _im = im;
}
void Complex::show()
{
    if( _im >= 0 )
        std::cout << _re
                << "+j"
                << _im
                << std::endl;
    else
        std::cout << _re
                << "-j"
                << -_im
                << std::endl;
}
Complex Complex::add(Complex z)
{
    Complex res;
    res._re = _re + z._re;
    res._im = _im + z._im;
    return res;
}
Complex Complex::mul(Complex z)
{
    Complex res;
    //algorithm
    return res;
}
Complex Complex::operator+(Complex z)
{
    Complex res;
    res._re = _re + z._re;
    res._im = _im + z._im;
    return res;    
}
Complex Complex::operator~()
{
    Complex res;
    res._re =  _re;
    res._im = -_im;
    return res;
}
Complex Complex::operator+(float re)
{
    Complex res;
    res._re = _re + re;
    res._im = _im;
    return res;
}
Complex Complex::operator/(float re)
{
    Complex res;
    res._re = _re / re;
    res._im = _im / re;
    return res;
}
Complex Complex::operator*(Complex z)
{
    Complex res;

    return res;
}
Complex Complex::operator/(Complex z)
{
    Complex res;

    return res;
}

