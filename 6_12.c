#include <stdio.h>
int main(void)
{
	int terms; 
	printf("How many terms do you want: "); 
	scanf("%d", &terms);
	double total = 0;
''
	for (int i = 1; i <= terms; i++)
	{
		total += 1 / (double) i;
		if (i % 2 == 0)
			total -= 1 / (double) i; 
		else
			total += 1 / (double) i;  
	}
	printf("The total is %lf\n", total); 

}