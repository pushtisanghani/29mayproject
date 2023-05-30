
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100];
	printf("enter string=");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0)
	{
		printf("this string is palindrom");
	}
	else 
	{ 
	    printf("this string is not palindrom");
	}
	return 0;
}
