#include<stdio.h>
int sum(int);
int main()
{
	int a;
	scanf("%d",&a);
	
	printf("%d",sum(a));
	return 0;	
}

int sum(int i)
{
	if (i==0)
		return 0;
	return ( i%10 + sum(i/10));
}

