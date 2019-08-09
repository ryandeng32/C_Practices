// compare 100 at 10% simple interest annualy with 100 at 5% annually
// find how long it takes for the second one to exceed the first one
#include <stdio.h>
int main(void)
{
	float totalDaphne = 100; 
	float totalDeirdre = 100; 
	int counter = 0; 
	do
	{
		totalDaphne += 100 * 0.1; 
		totalDeirdre *= 1.05; 
		counter++; 
	} while (totalDeirdre <= totalDaphne); 

	printf("It takes %d years, at this point, Daphne has $%.2f and Deirdre has $%.2f\n", counter, totalDaphne, totalDeirdre); 

	return 0; 
}