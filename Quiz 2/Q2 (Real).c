/*
 * Take a character from the user and print the character than comes 2 before it
 * c/a, M/K, [/Y
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	char ch;
	scanf("%c", &ch);

	printf ("%c", ch-2);

	return 0;
}
