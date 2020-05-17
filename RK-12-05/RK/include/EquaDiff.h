#ifndef EQUADIFF_H
#define EQUADIFF_H

class EquaDiff
{
    public:
        EquaDiff();
        virtual void Derivee(double* yp, double x, double *y) = 0; // yp = f(x,y)
        virtual ~EquaDiff();
    protected:
    private:
};

#endif // EQUADIFF_H
