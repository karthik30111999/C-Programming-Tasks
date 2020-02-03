#include<stdio.h>
int lcm(int,int);
int main()
{
	int num1,num2,LCM;
	scanf("%d %d",&num1,&num2);
	if(num1 >num2)
	LCM=lcm(num2,num1);
	else
	LCM=lcm(num1,num2);
	printf("LCM of %d & %d : %d",num1,num2,LCM);
	return 0;
}

int lcm(int a,int b)
{
	static int mul =0;
	mul+=b;
	if(mul%a==0 && mul%b==0)
	return mul;
	else
	return lcm(a,b);
}

