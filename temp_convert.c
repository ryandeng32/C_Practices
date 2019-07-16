// print out a table converting Celsius to Fahrenheit
#include <stdio.h>

int main(void)
{
	printf("Celsius to Fahrenheit\n"); 
	printf("---------------------\n"); 
	int lower, upper, step; 
	float fahr, celsius; 

	lower = 0; 
	upper = 300;
	step = 20; 

	celsius = lower; 
	while (celsius <= upper)
	{	
		fahr = celsius * 9 / 5 + 32; 
		printf("%5.0fC %6.2fF\n", celsius, fahr); 
		celsius += step; 
	}
}