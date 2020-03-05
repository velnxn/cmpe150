/* Take three integers by the user and print the sum of those not
 * divisible by 3.
 * Use relational operators.
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b, c;
	printf ("Enter three integers: \n");
	scanf("%d%d%d", &a, &b, &c);

	a = (a % 3 != 0) * a;
	b = (b % 3 != 0) * b;
	c = (c % 3 != 0) * c;

	printf("Sum of numbers not divisible by 3: %d", a + b + c);

	return 0;
}
