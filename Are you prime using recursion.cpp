#include<stdio.h>
int prime(int,int);
int main()
{
	int num;
	scanf("%d",&num);
	if(prime(num,num/2)==1)
	printf("It is a prime number");
	else
	printf("It is a non-prime number");
	return 0;	
}
int prime(int num, int i)
{
	if(i==1)
	return i;
	else
	{
		if(num%i==0)
		return 0;
		else
		return prime(num,i-1);
	}
}
