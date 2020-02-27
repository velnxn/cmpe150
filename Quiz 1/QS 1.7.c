/*Write a program that reads three integers from the user.
* Then outputs the average of these three numbers. (Hint: Type Casting) */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b, c;
	float av;

	printf ("Enter three numbers: \n");
	scanf ("%d%d%d", &a, &b, &c);

	av = (a+b+c) / (float) 3;

	printf ("Average: %.2f", av);

	return 0;
}
