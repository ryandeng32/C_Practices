// this program requests two floating-point numbers and prints the value of their difference divided by their product
// the program will be looped until the user enters nonnumeric input
#include <stdio.h>
#include <math.h>
int main(void)
{
	float num1, num2; 

	printf("Please enter two numbers: "); 
	while(scanf("%f %f", &num1, &num2) == 2)
	{
		printf("%f\n", fabs(num1 - num2) / (num1 * num2)); 
		printf("Please enter two numbers: "); 
	}

	return 0;
}