// this program requests a Fahrenheit temperature
// and it conerts it to Celsius and the Kelvin equivalent
#include <stdio.h>
void Temperature(double temp); 
int main(void)
{
	double temp;
	printf("Enter a temperature in Fahrenheit: ");
	while (scanf("%lf", &temp) == 1)
	{
		Temperature(temp); 
		printf("Enter a temperature in Fahrenheit: ");
	}
	printf("Done\n"); 
	return 0; 
}
void Temperature(double temp)
{
	const int toCelsiusFactor = 32;
	const float toCelsiusMultiple = 5.0 / 9.0;
	const float toKevinFactor = 273.15; 
	double celsius = (temp - toCelsiusFactor) * toCelsiusMultiple; 
	double kelvin = celsius + toKevinFactor; 
	printf("%.2lf in Fahrenheit is %.2lf in Celsius and %.2lf in Kelvin\n", temp, celsius, kelvin); 
}