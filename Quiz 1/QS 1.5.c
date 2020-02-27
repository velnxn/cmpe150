/* Write a program that reads two integers as the side lengths of a rectangle.
	* Then outputs the perimeter and the area of the rectangle. */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b;
	printf ("Enter the lengths of the rectangle: \n");
	scanf ("%d%d", &a, &b);

	printf ("The perimeter: %d\nThe area: %d", (a + b) * 2, a * b);

	return 0;
}
