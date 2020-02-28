// Print 1 if character is a digit, 0 if not

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	char ch;
	scanf ("%c", &ch);
	printf ("%d", ch >= '0' && ch <= '9');

	return 0;
}
