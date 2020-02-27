/* Write a C program that reads the radius of a sphere and calculates the volume.
 * (π: 3.14) $$ V = 4/3πr^3 $$*/

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {

	float r;
	float v;

	printf ("Enter the radius: ");
	scanf ("%f", &r);

	v = r * r * r * 4/3 * 3.14;

	/*
	 * 4/3'ü başa yazarsan farklı sonuç çıkıyor çünkü önce bunları hesaplayıp integer
	 * sonuç veriyor ve işlemin devamını integer olarak çözüyor. ama önce r'yi
	 * hesaplatırsan sonucu float hesaplıyor ve işlemin kalanı da float olarak
	 * varsayılarak tamamlanıyor. ya da en başında 1.0 ile çarpabiliriz.
	 */

	printf ("This is the volume: %.2f", v);
	// %.2f: 0'dan sonra 2 basamak olsun demek

	return 0;
}
