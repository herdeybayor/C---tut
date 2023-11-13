#ifndef MATH_UTILS
#define MATH_UTILS

#include <iostream>
#include <cmath>

typedef struct
{
    double length;
    double width;
} Rectangle;

double area(double length, double width);
double area(double length);
double area(Rectangle rectangle);
double pow(double base, int pow = 2);

#endif // !MATH_UTILS