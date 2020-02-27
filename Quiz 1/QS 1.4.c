#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	// the sizes of data types
	    printf("size of int = %lu\n", sizeof(int));
	    printf("size of long int  = %lu\n", sizeof(long));
	    printf("size of unsigned int = %lu\n", sizeof(unsigned int));
	    printf("size of char = %lu\n", sizeof(char));
	    int a; // declaration
	    a = 2147483647; // assignment of largest int
	    printf("%d\n", a+1); //overflow

	return 0;
}
