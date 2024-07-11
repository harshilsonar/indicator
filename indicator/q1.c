#include<stdio.h>
#include<conio.h>

int stringlength(char *str)
{
	int length=0;
	while(*str)
	{
		length++;
		str++;
	}
	return length;
	
}

int main()
{
	char input[100];
	
	printf("enter the string:\n");
	gets(input);
	
	printf("length of the string  %d\n",stringlength(input));
}
