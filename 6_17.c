#include <stdio.h>
int main(void)
{
	float totalMoney = 1000000; 
	int counter = 0; 
	do 
	{
		totalMoney *= 1.08; 
		totalMoney -= 100000; 
		counter++; 
	} while (totalMoney > 0); 

	printf("It takes %d years", counter); 

	return 0;
}