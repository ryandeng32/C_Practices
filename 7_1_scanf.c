// 7.1 using scanf instead of getchar
#include <stdio.h>
int main(void)
{
	char ch; 
	int ns, nn, no;
	ns = nn = no = 0; 
	printf("Enter text below: (# to terminate): \n"); 
	scanf("%c", &ch); 
	while (ch != '#')
	{
		if (ch == ' ')
			ns++; 
		else if (ch == '\n')
			nn++; 
		else 
			no++;
		scanf("%c", &ch); 
	}
	printf("You entered %d %s, %d %s, %d %s\n", 
		ns, ns==1?"space":"spaces", nn, nn==1?"newline character":"newline characters",
		no, no==1?"other character":"other characters"); 

	return 0;
}