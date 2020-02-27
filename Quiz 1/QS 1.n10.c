// Type conversion

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void) {

	 int i=3;
	  float f;

	  f = i;
	  printf("i=%d f=%f\n", i, f);

	  f=7.69;
	  i = f;
	  printf("i=%d f=%f\n", i, f);

	  i = 4.5;
	  f = i;
	  printf("i=%d f=%f", i, f);

	return 0;
}
