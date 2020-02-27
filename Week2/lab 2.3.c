/* Write a program that prints the following shape to the screen using only printf().
 * Write a program that prints a block F using hash (#),
 * where the F has a height of six characters and width of five and four characters.
 * Write a program that takes two integers from the user and then prints the product
 * of the numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {

	printf ("*   *\n * * \n  *  \n * * \n*   *\n\n\n");

	printf ("#####\n#\n###\n#\n#\n\n");

	int num1, num2, mult;
	scanf ("%d%d", &num1, &num2);
	mult = num1 * num2;
	printf ("%d", mult);

	return 0;
}
