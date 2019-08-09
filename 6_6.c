// this program prints a table with each line giving an integer, its square and its cube
// the user will input the lower and upper limits for the table.
// the program uses a for loop 
#include <stdio.h>
int main(void)
{
	int lower, upper; 
	do 
	{
	printf("Please enter a number as the lower limit: "); 
	scanf("%d", &lower); 
	printf("Please enter another number as the upper limit: "); 
	scanf("%d", &upper); 
	} while (lower > upper);

	printf("Number     Square     Cube\n"); 
	for (int i = lower; i <= upper; i++)
	{
		printf("%5d      %5d      %5d\n", i, i * i, i * i * i); 
	}

	return 0;
}