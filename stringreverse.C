#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[40];
	
	printf("Enter a string:-");
	scanf("%s",&str);
	
	printf("\n Reverse of a string:-%s",strrev(str));
	
	return 0;
	
	
	
}
