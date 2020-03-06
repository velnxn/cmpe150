// Take a coordinate and print which quadrant it's in

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int x, y;
	printf("Enter the coordinates: \n");
	scanf("%d%d", &x, &y);

	if (x > 0){
		if (y > 0){
			printf("x: %d, y: %d, Q: I", x, y);
		}
		else{
			printf("x: %d, y: %d, Q: IV", x, y);
		}
	}

	else if (x < 0){
		if (y > 0){
			printf("x: %d, y: %d, Q: II", x, y);
		}
		else{
			printf("x: %d, y: %d, Q: III", x, y);
		}
	}

	else if (x == 0 || y == 0){
		if (x == 0){
			printf ("x: %d, y: %d, Y axis", x, y);
		}
		else{
			printf("x: %d, y: %d, X axis", x, y);
		}
	}

	else{
		printf("x: %d, y: %d, Origin", x, y);
	}



	return 0;
}
