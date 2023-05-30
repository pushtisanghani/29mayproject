#include<stdio.h>

int main()
{
	char a[100],b[100];
	
	printf("enter username=");
	gets(a);
	printf("enter password=");
	gets(b);
	if(strcmp(a,"pushti")==0)
	{
		if(strcmp(b,"pushti#123")==0)
		{
			printf("user successfully login");
		}
		else
		{
			printf("check your password and try again");
		}
	}
	else
	{
		printf("plz check your username");
	}
}
