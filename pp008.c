//pp008:
//Write a program to input few numbers from command line and print all even numbers from given set of numbers.
#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	if(argc!=1)
	{
		printf("Even numbers from given set of numbers are: ");
		for(i=1;i<argc;i++)
		{
			if(atoi(argv[i])%2==0)
			printf(" %d ",atoi(argv[i]));
		}
	}
	else
	{
		printf("Syntax is: <pp008> <Enter the numbers that you want to check >");
	}
	return 0;
}
