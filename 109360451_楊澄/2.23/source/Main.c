#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//printf("Enter three integers,and I will tell you\n");
	printf("the greatest and the smallest : \n");
	int n1, n2, n3;
	scanf("%d%d%d", &n1,&n2,&n3);
	//1最大
	if (n1 == n2 && n2 == n3)
	{
		printf("%d and %d are equal to %d\n",n1,n2,n3);
	}
	else if (n1 > n2 && n2 > n3)
	{
		printf("%d is the greatest\n",n1);
		printf("%d is the smallest\n", n3);
	}
	else if (n1 > n2 && n2 == n3)
	{
		printf("%d is the greatest\n", n1);
		printf(" %d and %d are the smallest\n",n2, n3);
	}
	else if (n1 > n3 && n3 > n2)
	{
		printf("%d is the greatest\n", n1);
		printf("%d is the smallest\n", n2);
	}
	else if (n1 == n2 && n2 > n3)
	{
		printf("%d and %d are the greatest\n", n1,n2);
		printf("%d is the smallest\n", n3);
	}
	else if (n1 == n3 && n3 > n2)
	{
		printf("%d and %d are the greatest\n", n1, n3);
		printf("%d is the smallest\n", n2);
	}
	//2最大
	else if (n2 > n1 && n1 > n3)
	{
		printf("%d is the greatest\n", n2);
		printf("%d is the smallest\n", n3);
	}
	else if (n2 > n1 && n1 == n3)
	{
		printf("%d is the greatest\n", n2);
		printf(" %d and %d are the smallest\n", n1, n3);
	}
	else if (n2 > n3 && n3 > n1)
	{
		printf("%d is the greatest\n", n2);
		printf("%d is the smallest\n", n1);
	}
	
	else if (n2 == n3 && n3 > n1)
	{
		printf("%d is the greatest\n", n2, n3);
		printf("%d is the smallest\n", n1);
	}
	//3最大
	else if (n3 > n1 && n1 > n2)
	{
		printf("%d is the greatest\n", n3);
		printf("%d is the smallest\n", n2);
	}
	else if (n3 > n1 && n1 == n2)
	{
		printf("%d is the greatest\n", n3);
		printf(" %d and %d are the smallest\n", n1, n2);
	}
	else if (n3 > n2 && n2 > n1)
	{
		printf("%d is the greatest\n", n3);
		printf("%d is the smallest\n", n1);
	}
	
	system("pause");
	return 0;
}
