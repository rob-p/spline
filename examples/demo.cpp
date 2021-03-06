#include <cstdio>
#include <cstdlib>
#include <vector>
#include "spline.h"

int main(int argc, char** argv)
{
    std::vector<double> X(5), Y(5);
    X[0]=0.1;
    X[1]=0.4;
    X[2]=1.2;
    X[3]=1.8;
    X[4]=2.0;
    Y[0]=0.1;
    Y[1]=0.7;
    Y[2]=0.6;
    Y[3]=1.1;
    Y[4]=0.9;

    tk::spline s(X, Y, tk::spline_type::cubic);

    //tk::spline s({{0.1, 0.4, 1.2, 1.8, 2.0}}, {{0.1, 0.7, 0.6, 1.1, 0.9}});
    double x=1.5;

    printf("spline at %f is %f\n", x, s(x));

    return EXIT_SUCCESS;
}
