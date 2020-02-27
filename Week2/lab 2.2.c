#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(void)
{

	int num1, num2;

	scanf("%d%d", &num1, &num2);
	/*scanfte %d'den sonra boşluk bırakırsan bazen programı ilerletmeyip
	 * boşluğu bekliyor*/
	// printf ("%d\n%d\n", num1, num2);

	int res = num1 + num2;
	//printf("%d", res);

	printf("num1: %d, num2: %d, res: %d", num1, num2, res);
	//sırası önemli

	return 0;
}
