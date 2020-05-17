#include "equadiff2.h"

equadiff2::equadiff2()
{
    //ctor
}

void equadiff2::Derivee(double* yp, double x, double *y)
{
    yp[0] = y[1]*y[2];
    yp[1] = -y[0]*y[2];
    yp[2] = -0.51*y[0]*y[1];
}

equadiff2::~equadiff2()
{
    //dtor
}
