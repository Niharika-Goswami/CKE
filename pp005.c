//pp005:
//Write a program to input two numbers and print all even numbers in given range.
#include<stdio.h>
int main()
{
	int l,i,h;
	printf("Enter the first number of the range: ");
	scanf("%d",&l);
	printf("Enter the second number of range: ");
	scanf("%d",&h);
	printf("The even numbers in the given range are: ");
	for(i=l;i<=h;i++)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}
