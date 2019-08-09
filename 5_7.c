// this program requests a number and prints the value cubed
#include <stdio.h>
void cube(double num); 

int main(void)
{
	double num; 
	printf("Enter a number: "); 
	scanf("%lf", &num); 
	cube(num); 
}

void cube(double num)
{
	printf("%.2lf\n", num * num * num); 
}