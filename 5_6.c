// this program will compute the sum of the square of integers from 1 to n,
// n is given by the user
#include <stdio.h>
int main(void)
{
	int upTo; 
	int sum = 0; 
	int counter = 0; 
	printf("Enter a number for n: "); 
	scanf("%d", &upTo); 

	while (counter++ < upTo)
	{
		sum += counter * counter; 
	}
	printf("The total value is %d\n", sum); 

	return 0; 
}