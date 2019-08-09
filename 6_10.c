// this program requests lower and upper integer limits
// it calculates the sum of all the integer squares from the sqaure of the lower limit
// to the square of the upper limit and displays the answer.
// the program should repeat until the user enters a upper limit that is <= lower limit
#include <stdio.h>
int main(void)
{
	int lower, upper, sum; 
	printf("Enter lower and upper integer limits: "); 
	while (scanf("%d %d", &lower, &upper) == 2 && upper > lower)
	{
		sum = 0; 
		for (int i = lower; i <= upper; i++)
		{
			sum += i * i; 
		}
		printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum); 
		printf("Enter next set of limits: ");
	}
	printf("Done\n");

	return 0;
}