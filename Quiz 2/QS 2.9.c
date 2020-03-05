/* Write a program which reads an upper-case char (character) from the user,
then prints its rank in the alphabet. */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	char ch;
	scanf("%c", &ch);
	printf("%d", ch - 'A' + 1);

	return 0;
}
