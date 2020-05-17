#include <iostream>
#include "EquaDiff.h"

using namespace std;

#include "equadiff1.h"
#include "equadiff2.h"
#include "RungeKutta.h"

int main()
{

    equadiff1 *eq1 = new equadiff1();

    //EquaDiff *eq, int dim, double a, double b, double step, double *y0
    double y0_1[1];
    y0_1[0] = 1;
    int dim1 = 1;
    double a1 = 1, b1 = 4;
    double step1 = 0.01;
    double *y_1;
    int length1;
    //RungeKutta *rk1 = new RungeKutta(eq1, dim1, a1, b1, step1, y0); --> il faut faire delete rk;
    //RungeKutta rk1 = RungeKutta(eq1, dim1, a1, b1, step1, y0);
    RungeKutta rk1(eq1, dim1, a1, b1, step1, y0_1);
    rk1.solution(y_1, length1);
    cout<<"Solution de eq 1"<<endl;
    for(int i=0;i<length1;i++)
        cout<< i << " : " << y_1[i] <<endl;

    equadiff2 *eq2 = new equadiff2();

    double y0_2[3] = {0,1,1};
    int dim2 = 3;
    double a2 = 0, b2 = 12;
    double step2 = 0.1;
    double *y_2;
    int length2;
    RungeKutta rk2(eq2, dim2, a2, b2, step2, y0_2);
    rk2.solution(y_2, length2);
    int nb = length2/dim2;
    cout<<"Solution de eq 2"<<endl;
    for(int i=0;i<nb;i++)
    {
        cout<<i<<" i : ";
        for(int k=0;k<dim2;k++)
            cout<<y_2[i*dim2+k]<<", ";
        cout<<endl;
    }

    delete[] y_1;
    delete[] y_2;
    delete eq1;
    delete eq2;

    return 0;
}
