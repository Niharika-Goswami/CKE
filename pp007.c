//pp007
//Write a program to input from user till 0 is pressed and check every given number to be even or odd.
#include<stdio.h>
#include<process.h>
int main()
{
	int n;
	for(;;)
	{
		printf("Enter the number: ");
		scanf("%d",&n);
		if(n==0)
		{
			exit(0);
		}
		else if(n%2==0)
		{
			printf("Even \n");
		}
		else
		{
			printf("Odd \n ");
		}
	}
	return 0;
}
