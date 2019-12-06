#include<stdio.h>
int main()
{
	int a=10,b=90,c=998,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("the biggest no is:%d",c);
	return 0;
}
