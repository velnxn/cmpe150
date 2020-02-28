// Convert height in cm to feet

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
//  #define PI 3.14 // constant value
#define itf 12
#define cmt 2.54

int main() {

	float a;
	printf("Enter height: ");
	scanf ("%f", &a);

	a = a / cmt;
	a = a / itf;

	printf ("Height in feet: %.4f", a);

	return 0;
}
