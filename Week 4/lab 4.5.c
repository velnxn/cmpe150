// Take three integers, find the largest one

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	/*
	 * if (a > b){
		if (c > a){
			printf("%d", c);
		}
		else{
			printf("%d", a);
		}
	}

	* if (b > a){
			if (c > b){
				printf("%d", c);
			}
			else{
				printf("%d", b);
			}
		}
	*/

	///////////////////////////////////////////////////////////////////

	/*
	 * if(a > b && b > c){
		printf("%d", a);
	}
	* else if (b > a && b > c){
		printf("%d", b);
	}
	* else{
		printf ("%d", c);
	}
	*/


	int result;
	int temp = a > b ? a : b;
	result = temp > c ? temp : c;
	printf ("%d", result);
	// a * (b > c) ? b : c;

	return 0;
}
