#include <stdio.h>
#define MAX 150
int main(void)
{
	int totalFriend = 5; 
	int week = 0; 
	printf("Week     Friends\n"); 
	while (totalFriend <= MAX)
	{
		printf("%3d %3d\n", week, totalFriend); 
		week++; 
		totalFriend -= week; 
		totalFriend *= 2; 
	}

	return 0;
}