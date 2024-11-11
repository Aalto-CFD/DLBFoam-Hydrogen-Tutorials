// Scripts used for blockMesh calculations

#ifndef meshing_H
#define meshing_H

#include <math.h>

// Calculate the geometric expansion ratio as defined in blockMesh: ratio of largest to smallest cell size
// Always positive
double expansion_ratio(const int N, const double L, const double smallestdx) {
    double r = 2.; // initial guess
    double r_old;
    do {
        r_old = r;
        double f = smallestdx*(1 - pow(r, N))/(1-r) - L;
        double df = smallestdx*((N-1)*pow(r, N+1) - N*pow(r, N) + r)/(1-r)/(1-r)/r;
        r = r - f/df;
        // Info << "r = " << r << endl;
        // Info << "err = " << mag(r-r_old)/r << endl;
    } while (abs(r-r_old)/r > 1e-10);
    return pow(r, N-1);
}

double expansion_ratio_largestdx(const int N, const double L, const double largest_dx) {
    double r = 2.; // initial guess
    double r_old;
    do {
        r_old = r;
        double f = largest_dx*(pow(r, 1-N)-r)/(1-r) - L;
        double df = largest_dx*(1-N)*pow(r, -N-1) - 1/(1-r) - largest_dx*(pow(r, 1-N)-r)/(1-r)/(1-r);
        r = r - f/df;
        // Info << "r = " << r << endl;
        // Info << "err = " << mag(r-r_old)/r << endl;
    } while (abs(r-r_old)/r > 1e-10);
    return pow(r, N-1);
}

double smallest_dx(const int N, const double L, const double expansion_ratio) {
    double ratio = pow(expansion_ratio, 1./(N-1));
    return L/(ratio*(pow(ratio, N)-1)/(ratio-1));
}


#endif
