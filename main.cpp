#include "info2_complex.h"

int main()
{
    Complex z1(  3 , -2 );
    Complex z2( -8 ,  7 );
    Complex z3;
    z3 = z1 + z2; //z3 = z1.add( z2 );
    z3 = ~z1;
    z3 = z2 + 7;
    z3 = z1 / z2;
    z3.show();
}
