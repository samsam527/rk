#ifndef RUNGEKUTTA_H
#define RUNGEKUTTA_H

#include "EquaDiff.h"

class RungeKutta
{
public:
        EquaDiff *eq;
        double a, b, step;
        double *y0;
        int dim;
        RungeKutta();
        RungeKutta(EquaDiff *eq, int dim, double a, double b, double step, double *y0);
        void solution(double*& y, int& length);
        virtual ~RungeKutta();
    protected:
    private:
};

#endif // RUNGEKUTTA_H
