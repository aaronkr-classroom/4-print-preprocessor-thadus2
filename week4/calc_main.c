#include <stdio.h>
#include "calc.h"

int main() {
	double x = 2, y = 3;

	printf("x : %f + y : %f = %.0f\n", x, y, calc("sum", x, y));
	printf("x : %f - y : %f = %.0f\n", x, y, calc("sub", x, y));
	printf("x : %f x y : %f = %.0f\n", x, y, calc("mul", x, y));
	printf("x : %f / y : %f = %.2f\n", x, y, calc("div", x, y));
	printf("x : %f %% y : %f = %.0f\n", x, y, calc("rem", x, y));

	printf("x : %.1f ^ y : %.1f\n", power(x, y));
	printf("sqrt of x : %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y : %.1f = %.1f\n", y, area0fCircle(y));
	printf("circ of y : %.1f = %.1f\n", y, circumfrence0fCircle(y));

	return 0;
}