/* Write a program that takes two rational numbers from the user and adds them. Display
 * the result as a real number on the screen. You will read 4 integers from the user
 *  first two will form the first rational number and the last two will form the second.
 *  Ex: User enters 6 8 12 5, first rational number will be 6/8, second will be 12/5 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int num1, num2, num3, num4;
	float r1, r2;

	printf ("Enter two integers: \n");
	scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);

	r1 = (float) num1 / num2;
	r2 = (float) num3 / num4;

	printf ("Sum of two rational numbers: %.2f", r1 + r2);

	return 0;
}
