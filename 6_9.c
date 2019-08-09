// this program requests two floating-point numbers and prints the value of their difference divided by their product
// the program will be looped until the user enters nonnumeric input
#include <stdio.h>
#include <math.h>

float special_func(float num1, float num2); 
int main(void)
{
	float num1, num2; 

	printf("Please enter two numbers: "); 
	while(scanf("%f %f", &num1, &num2) == 2)
	{
		printf("%f\n", special_func(num1, num2)); 
		printf("Please enter two numbers: "); 
	}

	return 0;
}

float special_func(float num1, float num2)
{
	return fabs(num1 - num2) / (num1 * num2);
}