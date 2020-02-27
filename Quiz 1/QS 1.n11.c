/*
 Write a program to read two floating numbers a and b,
 and print the result of the following operation:

 (3*a+b)*2

 input: 3.8 1.2
 output:  25.20

 Write a program that reads an integer from the user and
 then prints the following rectangle using only printf() function (Height:5*, Width:9*).

        input: 9

        999999999
        9	    9
        9	    9
        9	    9
        999999999
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	float a, b, o;

	printf ("Enter two floats: \n");
	scanf ("%f%f", &a, &b);

	o = (3*a+b)*2;

	printf("%.2f\n", o);

	int c;

	printf ("Enter an integer: \n");
	scanf ("%d", &c);

	printf ("%d%d%d%d%d%d%d%d%d\n", c, c, c, c, c, c, c, c, c);
	printf ("%d       %d\n", c, c);
	printf ("%d       %d\n", c, c);
	printf ("%d       %d\n", c, c);
	printf ("%d%d%d%d%d%d%d%d%d\n", c, c, c, c, c, c, c, c, c);

	return 0;
}
