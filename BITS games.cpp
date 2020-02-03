#include<stdio.h>
int main()
{
	int j,m,i;
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(m=1;m<=j;m++)
		printf("01");
		printf("\n");
	}
	return 0;
}
