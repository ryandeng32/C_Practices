/*
this program reads integers until 0 is entered
it will report the total number of even integers
the average value of the even integers, the total number of odd integers
the average value of the odd integers
*/ 
#include <stdio.h>
int main(void)
{
	int num; 
	int num_even, num_odd, sum_even, sum_odd; 
	num_even = num_odd = sum_even = sum_odd = 0; 

	printf("Please enter a integer: (0 to end ): \n"); 
	scanf("%d", &num); 
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			num_even++; 
			sum_even += num; 
		}
		else
		{
			num_odd++; 
			sum_odd += num; 
		}

		printf("Please enter the next integer: (0 to end ): \n"); 
		scanf("%d", &num); 
	}
	if (num_even + num_odd > 0)
	{
		printf("There are %d even numbers, %d odd numbers, the average of even numbers is %f, the average of odd numbers is %f", 
			num_even, num_odd, (float) sum_even / num_even, (float) sum_odd / num_odd); 
	}
	else
		printf("Not enough numbers!\n"); 

	return 0; 
}