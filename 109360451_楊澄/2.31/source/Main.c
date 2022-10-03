#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{	
	printf("nmber	square	cube\n");
	for (int i = 1; i < 11; i++)
	{
		int a2 = pow(i, 2);
		int a3 = pow(i, 3);
		printf("%d	%d	%d\n", i, a2,a3);
	}
	system("pause");
	return 0;
}
