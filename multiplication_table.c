#include <stdio.h>

// print the multiplication table
int main(void)
{	
	int mult_1 = 1; 
	int mult_2;

	printf("\n\n\n | THE MULTIPLICATION TABLE\n"); 

	while (mult_1 <= 9)
	{	
		printf(" |"); 
		mult_2 = 1; 
		while (mult_2 <= mult_1)
		{
			printf(" %i * %i = %2i |", mult_2, mult_1, mult_1 * mult_2); 
			mult_2++; 
		}
		printf("\n"); 
		mult_1++; 
	}

	printf(" |"); 
	int i = 1; 
	while (i <= 9)
	{
		printf("%6i      ", i); 
		i++; 
		printf("|"); 
	}

	printf("\n\n\n");


	return 0; 
}