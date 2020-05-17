#include "RungeKutta.h"
#include "math.h"

RungeKutta::RungeKutta(EquaDiff *eq, int dim, double a, double b, double step, double *y0)
{
    this->eq = eq;
    this->dim = dim;
    this->a = a;
    this->b = b;
    this->step = step;
    this->y0 = y0;
}

void RungeKutta::solution(double*& y, int& length)
{
    int nbsol = (int) floor((b-a)/step);
    double *c1, *c2, *yp, *yt;

    c1 = new double[dim];
    c2 = new double[dim];
    yt = new double[dim];
    yp = new double[dim];

    length = (nbsol + 1)*dim;
    y =  new double[length];

    for(int k=0;k<dim;k++)
        y[k] = y0[k];

    // variables locales c1, c2, yp
    for(int i = 0; i<nbsol; i++) // y_i --> y_i+1
    {
        double x = a + step*i;
        eq->Derivee(yp,x,y+i*dim);
        for(int k=0;k<dim;k++)
            c1[k] = step*yp[k];
        for(int k=0;k<dim;k++)
            yt[k]  = y[i*dim+k] + 0.5*c1[k];
        eq->Derivee(yp,x+0.5*step,yt);
        for(int k=0;k<dim;k++)
            c2[k] = step*yp[k];
        for(int k=0; k<dim;k++)
            y[(i+1)*dim+k] = y[i*dim+k] + c2[k];

    }

    delete[] c1;
    delete[] c2;
    delete[] yt;
    delete[] yp;
}

RungeKutta::RungeKutta()
{
    //ctor
}

RungeKutta::~RungeKutta()
{
    //dtor
}
