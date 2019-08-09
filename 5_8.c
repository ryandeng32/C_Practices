// This program displays the results of applying the modulus operation
#include <stdio.h>
int main(void)
{
	int second_operand, first_operand; 
	printf("This program computes moduli.\n"); 
	printf("Enter an integer to serve as the second operand: "); 
	scanf("%d", &second_operand); 
	printf("Now enter the first operand (<= 0 to quit): "); 
	scanf("%d", &first_operand); 

	while (first_operand > 0)
	{
		printf("%d %% %d is %d\n", first_operand, second_operand, first_operand % second_operand); 
		printf("Now enter the first operand (<= 0 to quit): "); 
		scanf("%d", &first_operand); 
	}
	printf("Done\n"); 

	return 0; 
}