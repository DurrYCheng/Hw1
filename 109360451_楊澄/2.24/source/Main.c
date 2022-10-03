#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	a = 0;
	b = 0;
	printf("Enter a integer !\n");
	scanf("%d", &a);
	b = a % 2;
	if (b != 0)
	{
		printf("%d is an odd number !",a);
	}
	else if (b == 0)
	{
		printf("%d is an even number ! ", a);
	}
	system("pause");
	return 0;
}
