#ifndef EQUADIFF1_H
#define EQUADIFF1_H

#include "EquaDiff.h"

class equadiff1 : public EquaDiff
{
    public:
        equadiff1();
        void Derivee(double* yp, double x, double *y);
        virtual ~equadiff1();
    protected:
    private:
};

#endif // EQUADIFF1_H
