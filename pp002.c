//pp002
//Write a program to input a number and check it to be even or odd using switch statement:
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	switch(n%2==0)
	{
		case 0:
		{
			printf("odd");
			break;
	    }
		case 1:
		{
			printf("Even");
		    break;
	    }
	}
	return 0;
}
