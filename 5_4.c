 // this program asks the user to enter a height in centimeters
 // and then displays the height in centimeters and in feet and inches

#include <stdio.h>
int main(void)
{
	const float CM_PER_FOOT = 30.48; 
	const float CM_PER_INCH = 2.54;

	float cm, inch; 
	int foot; 
	printf("Enter a height in centimeters (<=0 to quit): "); 
	scanf("%f", &cm); 

	while (cm > 0)
	{
		foot = cm / CM_PER_FOOT; 
		inch = (cm - foot * CM_PER_FOOT) / CM_PER_INCH; 
		printf("%.1f cm = %d feet, %.1f inches\n", cm, foot, inch); 
		printf("Enter a height in centimeters (<=0 to quit): "); 
		scanf("%f", &cm); 
	}
	printf("Bye\n"); 

	return 0; 
}