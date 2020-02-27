// Write a program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {

	int s;
	printf ("Enter your time in seconds: ");
	scanf ("%d", &s);

	// H*3600 + M*60 + S || H * 3600 + (M*60 + S) = s

	int h = s / 3600;
	int r = s % 3600;
	int m = r / 60;
	int sec = r % 60;

	printf ("H: %d, M: %d, S: %d", h, m, sec);

	return 0;
}
