#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

  int x=5, y=3;
   x +=y; /* same as x = x + y */
  printf("x:%d\n",x);

  y *= x; /* same as y = x * y */
  printf("y:%d x:%d\n",y,x);

	return 0;
}
