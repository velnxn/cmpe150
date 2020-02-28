/* Take three integers from user and perform this operation: (a+b*b)/c
 * Print the result as a 2 decimal float.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c;
	float e;
	scanf("%d%d%d", &a, &b, &c);

	e = 1.0 * b * b + 1.0 * a;
	e = e / (float) c;

	printf("%.2f", e);

	return 0;
}
