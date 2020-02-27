/* Write a program that takes 3 integer from the user and then prints the sum of odd
numbers. */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {


	int num1, num2, num3;

	printf ("Enter three numbers: ");
	scanf ("%d%d%d", &num1, &num2, &num3);

	int sum = num1 * (num1%2) + num2 * (num2%2) + num3 * (num3%2);

	printf ("Sum of odd numbers: %d", sum);

	return 0;
}
