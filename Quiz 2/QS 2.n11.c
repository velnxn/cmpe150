// Type Conversion

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int x=5, y=4;
	float avg, ratio;
	avg = (x + y)/2;           /* avg = 4.0 */
	printf("avg:%f\n",avg);

	avg = (x + y)/2.0;         /* avg = 4.5 */
	printf("avg:%f\n",avg);

	avg = ((float)x + y)/2;    /* avg = 4.5 */
	printf("avg:%f\n",avg);

	avg = (float)(x + y)/2;    /* avg = 4.5 */
	printf("avg:%f\n",avg);

	avg = (float)((x + y)/2);   /* avg = 4.0 */
	printf("avg:%f\n",avg);


	ratio = x/y;               /* ratio = 1.0 */
	printf("ratio:%f\n",ratio);

	ratio = (float)(x/y);      /* ratio = 1.0 */
	printf("ratio:%f\n",ratio);

	ratio = (float)x/y;        /* ratio = 1.25, the value of x will not change */
	printf("ratio:%f\n",ratio);

	ratio = (x+0.0)/y;         /* ratio = 1.25 */
	printf("ratio:%f\n",ratio);


	return 0;
}
