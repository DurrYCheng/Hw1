#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float miles, gas, MperG, park, toll ,cost ,a;
	printf("Total miles driven per day:\n");
	scanf("%f", &miles);
	printf("Cost per gallon of gasoline:\n");
	scanf("%f",&gas );
	printf("Average miles per gallon:\n");
	scanf("%f",&MperG );
	printf("Parking fees per day:\n");
	scanf("%f",&park );
	printf("Tolls per day:\n");
	scanf("%f",&toll );
	//printf("%.2f%.2f%.2f%.2f%.2f", miles, gas, MperG, park, toll);
	a = miles * gas / MperG;
	cost = a + park + toll;
	printf("Your cost is: %.2f $\n",cost);
	system("pause");
	return 0;
}
