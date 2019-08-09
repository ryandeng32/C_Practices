/* This program converts time in minutes to time in hours and minutes */

#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{	
	int min;
	int hour, left; 	// number of hours, and the minutes left  
	printf("Enter the number of minutes you want to convert ");
	printf("( <= 0 to quit ): ");  
	scanf("%d", &min); 

	while (min > 0)
	{
		hour = min / MIN_PER_HOUR; 
		left = min % MIN_PER_HOUR; 
		printf("That converts to %d hours and %d minutes!\n", hour, left); 
		printf("Enter the number of minutes you want to convert "); 
		printf("( <= 0 to quit ): "); 
		scanf("%d", &min); 
	}
	printf("That's all!\n"); 

	return 0; 
}