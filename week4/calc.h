#pragma once


#ifndef M_PI 
#define M_PI 3.14159265358979323846 
#endif 

#ifndef MATH_FUNC_H
#define MATH_FUNC_H

double calc(char* menu, int x, int y);

double power(double base, double exponent);
double squareRoot(double num);
double area0fCircle(double radius);
double circumfrence0fCircle(double radius);

#endif