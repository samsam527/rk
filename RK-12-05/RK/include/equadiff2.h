#ifndef EQUADIFF2_H
#define EQUADIFF2_H
#include "EquaDiff.h"

class equadiff2 : public EquaDiff
{
    public:
        equadiff2();
        void Derivee(double* yp, double x, double *y);
        virtual ~equadiff2();
    protected:
    private:
};

#endif // EQUADIFF2_H
