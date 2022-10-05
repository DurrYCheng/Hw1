#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float height, weight, bmi;
	printf("Enter your height(meters) and weight(kilograms): \n");
	scanf("%f%f", &height, &weight);
	printf("h=%.2f\nw=%.2f\n", height, weight);
	bmi = (weight) / (pow(height,2));
	printf("Your BMI is: %.2f\n", bmi);
	if (bmi < 18.5)
	{
		printf("Underweight\n");
	}
	else if (bmi > 18.5 && bmi < 24.9)
	{
		printf("Normal\n");
	}
	else if (bmi > 25 && bmi < 29.9)
	{
		printf("Overwight\n");
	}
	else
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;
}
