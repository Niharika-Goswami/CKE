//pp005:
//Write a program to input two numbers and print all even numbers in given range.
#include<stdio.h>
int main()
{
	int l,i,h;
	printf("Enter the range: ");
	scanf("%d%d",&l,&h);
	for(i=l;i<=h;i++)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}
