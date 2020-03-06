// Take two integers and an operation as a char, perform the operation

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	int a, b;
	char o;

	scanf("%d %d %c", &a, &b, &o);
	//scanf has to be like this idk why it's dumb

	if (o == '+'){
		printf("%d + %d = %d", a, b, a+b);
	}

	else if (o == '-'){
			printf("%d + %d = %d", a, b, a-b);
		}

	else if (o == '/'){
			printf("%d + %d = %d", a, b, a/b);
		}

	else{
			printf("%d + %d = %d", a, b, a*b);
		}

	return 0;
}
