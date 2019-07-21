// Calculate the greatest common divisor between 2 numbers
#include <stdio.h>

int main(void)
{
	int a, b, c; 
	printf("This program will calculate the greatest common divisor between two numbers\n"); 
	printf("Enter the first number: "); 
	scanf("%d", &a); 
	printf("Enter the second number: "); 
	scanf("%d", &b); 

	while (b != 0)
	{
		c = a % b;
		a = b; 
		b = c;
	}

	printf("The GCD is %d\n", a); 

}