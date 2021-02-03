//pp006:
//Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
int main()
{
	int i;
	int n[9];
	printf("Enter the data: \n");
	for(i=0;i<=9;i++)
	{
		printf("Enter %d number: ",i+1);
		scanf("%d",&n[i]);
	}
	printf("The even numbers in given numbers are: ");
	for(i=0;i<=9;i++)
	{
		printf(" %d ",n[i]);
	}
	return 0;
}
