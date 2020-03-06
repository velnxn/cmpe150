/*
 * Take a year from user and print if it's a leap year or not
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int year;
	printf("Enter year: \n");
	scanf("%d", &year);

	if (year % 4 == 0){
		printf("It's a leap year!");
	}
	else{
		printf("It's not a leap year :(");
	}

	/*
	 * if (year % 4){
	 * printf("It's not a leap year :(");
	 * }
	 * else{
	 * printf("It's a leap year!");
	 * }
	 *
	 * this also works
	 */

	return 0;
}
