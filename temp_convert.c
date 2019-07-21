// print out a table converting Celsius to Fahrenheit
#include <stdio.h>


void convert_temp(int lower, upper, step); 

int main(void)
{
	convert_temp(0, 300, 20); 
	return 0; 
}


void convert_temp(int lower, upper, step)
{
	printf("Celsius to Fahrenheit\n"); 
	printf("---------------------\n"); 
	float fahr, celsius; 

	celsius = lower; 
	while (celsius <= upper)
	{	
		fahr = celsius * 9 / 5 + 32; 
		printf("%5.0fC %6.2fF\n", celsius, fahr); 
		celsius += step; 
	}
}