// Messing with the ASCII table

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	/*
	char ch = ' ';
	printf ("%c\n", ch - ch + 65); // prints no 65 on ascii table
	printf ("%c\n", ch - ch + 321); // goes back to the beginning, prints 65 aka A
	printf ("%c\n", ch - ch); // null i think
	printf ("%c\n", ch - ch + 1);
	printf ("%c\n", ch - ch + 171); // it doesn't print the same table though
	printf ("%c\n", ch - ch + 60);
	printf ("%c\n", ch - ch + 128);
	printf ("%c\n", ch - ch + 126); // gets weird after 127

	*/

	int x;
	for (x = 120; x < 131; x++)
	{
		printf("%c\n",(char)x);
	}

	// yeah messes up after 127, idk why

	return 0;
}
