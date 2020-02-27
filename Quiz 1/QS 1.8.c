/* Write a program that takes 3 integer from the user
* then prints the sum of odd numbers. */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b, c, sum;
	printf ("Enter three numbers: \n");
	scanf ("%d%d%d", &a, &b, &c);

	sum = a * (a%2) + b * (b%2) + c * (c%2);

	printf ("Sum off odd numbers: %d", sum);

	return 0;
}
