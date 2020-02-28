/* Take three integers from the user and calculate the sum of the numbers not
 * divided by 3.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	//We can add all of them and subtract the ones divisible by 3 too.

	int num1, num2, num3;
	scanf ("%d%d%d", &num1, &num2, &num3);

	num1 = (num1 % 3 != 0) * num1;
	num2 = (num2 % 3 != 0) * num2;
	num3 = (num3 % 3 != 0) * num3;

	printf ("%d", num1 + num2 + num3);
	return 0;
}
