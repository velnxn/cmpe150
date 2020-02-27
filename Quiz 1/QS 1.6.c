/* Write a program that reads a float as the radius of a circle.
	* Then outputs the circumference and the area of the circle. (pi = 3.14) */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	float r, c, a;

	printf ("Enter the radius: \n");
	scanf ("%f", &r);

	c = 3.14 * 2 * r;
	a = r * r * 3.14;

	printf ("Circumference: %.3f, Area: %.3f", c, a);

	return 0;
}
