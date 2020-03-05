// Operators

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	/*
	int a = 2, b = 5;
    printf("%d %d %d\n", a++ || ++b, a, b); // anything not zero is true so 1
    printf("%d %d", a, b);
    */

	/*
	int a = -1, b = 5;
	printf("%d %d %d\n", ++a && ++b, a, b);
	printf("%d %d", a, b);
	*/

	int a = 0, b = 5;
	printf ("%d %d %d\n", a++ && ++b, a, b);


	return 0;
}
