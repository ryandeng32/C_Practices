// This program asks user to enter the number of days and then converts
// that value to weeks and days

#include <stdio.h>
#define DAY_PER_WEEK 7
int main(void)
{
	int numDays; 
	int numWeeks, left; 
	printf("Enter the number of days you want to convert "); 
	printf("( <= 0 to quit ): "); 
	scanf("%d", &numDays); 

	while (numDays > 0)
	{
		numWeeks = numDays / DAY_PER_WEEK; 
		left = numDays % DAY_PER_WEEK; 
		printf("%d days are %d weeks, %d days\n", numDays, numWeeks, left); ;
		printf("Enter the number of days you want to convert "); 
		printf("( <= 0 to quit ): "); 
		scanf("%d", &numDays); 
	}
	printf("That's all!\n"); 

	return 0; 
}