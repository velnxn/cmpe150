/*
Write a program that reads three integers x, y and z.
Then, the values of x, y and z are updated as follows:

 x = (x + y) * z
 y = (x * z^2) + y
 z = (z * 3 + y) - x
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int x, xi, y, yi, z, zi;

	printf("Enter three integers: \n");
	scanf ("%d%d%d", &xi, &yi, &zi);

	x = (xi + yi) * zi;
	y = (xi * zi * zi) + yi;
	z = (zi * 3 + yi) - xi;

	printf ("Here is the result of conversion: %d\n%d\n%d\n", x, y, z);

	return 0;
}
