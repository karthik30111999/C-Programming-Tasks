#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your mark : ");
	scanf("%d",&mark);
	if(mark>=85&&mark<=100)
	printf("\nGrade A");
	else if(mark>=70&&mark<=84)
	printf("\nGrade B");
	else if(mark>=55&&mark<=69)
	printf("\nGrade C");
	else if(mark>=40&&mark<=54)
	printf("\nGrade D");
	else if(mark<40)
	printf("\nGrade E");
	else
	printf("Enter valid input!");
	return 0;
}
