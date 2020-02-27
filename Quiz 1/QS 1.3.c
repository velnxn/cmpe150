/* Take the coefficients from the user. Print a polynom that has 2 degrees and its
* derivation */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int c1, c2, c3;
	printf ("Enter the coefficients: \n");
	scanf ("%d%d%d", &c1, &c2, &c3);

	printf ("The original polynom: %dx^2 + %dx + %d\n", c1, c2, c3);
	printf ("The derivation of the polynom: %dx + %d\n", c1 * 2, c2);

	return 0;
}
