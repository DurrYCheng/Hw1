#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter 2 integers!");
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a % b;
	if (c == 0)
	{
		printf("%d is a multiple of the %d", a, b);
	}
	else
	{
		printf("%d is not a multiple of the %d", a, b);
	}
	system("pause");
	return 0;
}
