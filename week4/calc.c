#include <stdio.h>
#include "calc.h"

double calc(char* menu, int x, int y) {
	if (menu == "sum")
		return (x + y);
	else if (menu == "sub")
		return (x - y);
	else if (menu == "mul")
		return (x * y);
	else if (menu == "div")
		return (double)x / y;
	else if (menu == "rem")
		return (x % y);
	else
		printf("unknown input");
}
double power(double base, double exponent)
{
	return pow(base, exponent);
}

double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num);
	else {
		printf("Error : Negative number!");
		return -1;
	}
}

double area0fCircle(double radius)
{
	return M_PI * radius;
}

double circumfrence0fCircle(double radius)
{
	return 2 * M_PI * radius;
}