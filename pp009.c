//pp009:
//Write a program having a function iseven() which which takes a number as input and returns 1 if the number is even else returns 0. 
//Create the main() function to input a number and check it to be even or odd using iseven() function.
#include<stdio.h>
int iseven(int x)
{
	if(x%2==0)
	return 1;
	else
	return 0;
}
void main()
{
	int n,x;
	printf("Enter number: ");
	scanf("%d",&n);
	x=iseven(n);
	if(x==1)
	printf("Even");
	else
	printf("Odd");
}
