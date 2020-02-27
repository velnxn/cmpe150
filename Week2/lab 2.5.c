/* Write a program that converts a temperature from Fahrenheit to Centigrade.
 * $$ C = (5/9) * (F - 32) $$ */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {

	float F;
	int C;

	printf ("Enter the Fahrenheit temperature: ");
	scanf ("%f", &F);

	C = (F-32) * 5/9;

	printf ("This is the Celcius temperature: %d", C);
	// C'yi float olarak tanımlayıp %d yerine %.0f de yazabiliriz

	return 0;
}
