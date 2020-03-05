#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int n = 5, x;
	    n++;     /* n = 6 */
	    printf("n:%d\n",n);
	    // n = n+1 OR n += 1 OR n++
	    // MY GUESS: 6

	    x=n++;
	    printf("x:%d n:%d\n",x,n);
	    /* equals to following two commands:
	    * x = n;
	    * n++;
	    */
	    // MY GUESS: 6, 7

	    x=n--;
	    printf("x:%d n:%d\n",x,n);
	    /* equals to following two commands:
	    * x = n;
	    * n--;
	    */
	    // MY GUESS: 7, 6

	    x=++n;
	    printf("x:%d n:%d\n",x,n);
	    /* equals to following two commands:
	    * n++;
	    * x = n;
	    */
	    // MY GUESS: 7, 7

	    x=--n;
	    printf("x:%d n:%d\n",x,n);
	    /* equals to following two commands:
	    * n--;
	    * x = n;
	    */
	    // MY GUESS: 6, 6


	return 0;
}
