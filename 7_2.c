/* program reads input until # is entered
it will prints each input characters and its ASCII decimal code, 8 per line
*/
#include <stdio.h>
#include <ctype.h>
#define MAX 999
int main(void)
{
	char ch[MAX];  
	int nc = 0; 
	while ((ch[nc] = getchar()) != '#')
		nc++; 
	for (int i = 0; i < nc - 2; i++)
	{
		printf("%c %d ",isspace(ch[i])?printf("space family"), ' ':ch[i], ch[i]); 
		if ((i + 1) % 8 == 0)
			putchar('\n'); 
	}
	printf("\nThat's all.\n"); 

	return 0; 
}