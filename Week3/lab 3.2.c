#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int x = 5;
	printf ("%d\n", x++); // prints 5 because it adds +1 later
	printf ("%d\n", x); // prints 6
	printf ("%d", ++x); // prints 7 because it adds +1 first

	return 0;
}
