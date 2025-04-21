# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include "Cylinder.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

using namespace std;

double Cylinder :: SurfaceArea(){
    return pow(radius,2) * M_PI * 2 + 2 * M_PI * radius * height;         
}

double Cylinder :: Volume(){
    return pow(radius, 2) * M_PI * height;
}

double Cylinder :: Circumference(){
    return 2 * M_PI * radius;
}

/*istream & operator>>(istream & in, Cylinder & cldr)
{    
    in >> cldr.radius >> cldr.height;
    return in;
}*/

istream& operator>>(istream& in, Cylinder& cldr) {
    in >> cldr.radius >> cldr.height;
    if (cldr.radius <= 0 || cldr.radius > INT_MAX - 1 ||
        cldr.height <= 0 || cldr.height > INT_MAX - 1) {
        //cerr << "Error: radius and height must be in the range (0, 2^31 - 1)." << endl;
        exit(1);
    }
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    out << fixed << setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl
        << "SurfaceArea: " << cldr.SurfaceArea() << endl
        << "Volume: " << cldr.Volume() << endl;	
    return out;
}

# endif
