#include <stdio.h>
#define MAX 100
// Write a function reverse(s) that reverses the character string s. Use it to write
// a program that reverses its input a line at a time. 
void reverse(char s[]);

int main(void)
{
	char line[MAX]; 
	int c; 
	int len = 0; 
	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
		{
			line[len] = c;
			len++; 
		}
		else{
		line[len] = '\0'; 
		len = 0; 
		reverse(line); 
		printf("%s\n", line); 
	}
	}

}


void reverse(char s[])
{
	int len = 0; 
	while(s[len] != '\0')
		len++; 
	char copy[len+1]; 
	for (int i = 0; i < len; i++)
		copy[len - i - 1] = s[i]; 
	copy[len] = '\0'; 
	for (int i = 0; i < len + 1; i++)
		s[i] = copy[i]; 	
}

