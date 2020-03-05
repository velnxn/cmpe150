// Write a program that reads two numeric characters and prints their multiplication.

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	char ch1, ch2;
	scanf("%c %c", &ch1, &ch2);

	printf("%d", (ch1 - '0') * (ch2 - '0'));

	/* The digit you enter is a character so its integer value is not the same as the
	 * digit you enter. You subtract the character 0 from it and get the actual integer
	 * value you meant to enter. Then you multiply.
	 * Example: Character 6's integer value is actually 54, 0's is 48. When you subtract
	 * the characters you get 6 and then you can do the math like they're integers.
	 * Basically you convert the ASCII integer value to user integer value.
	 */

	return 0;
}
