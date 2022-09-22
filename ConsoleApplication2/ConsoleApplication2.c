#include <stdio.h>
#include <math.h>


int main() {

	double x, y;
	printf("insert x value: ");
	scanf_s("%lf", &x);
	y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);
	printf("y = x^3 - 4x^2 - 5x + 9 + cos x\nresult: y = %.2lf\n", y);

	return 0;
}
