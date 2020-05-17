#include "equadiff1.h"

equadiff1::equadiff1()
{
    //ctor
}
void equadiff1::Derivee(double* yp, double x, double *y)
{
    *yp = *y/x + 3*(*y);
}

equadiff1::~equadiff1()
{
    //dtor
}
