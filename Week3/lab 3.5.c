// Take a lowercase letter and print uppercase

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	char ch;
	scanf ("%c", &ch);

	// printf("%d", 'h'-'H'); // you can see the difference
	// ch = ch - 'a' + 'A'; // sees how far from a it is and moves that much away from A

	printf ("%c", ch - 32);

	return 0;
}
