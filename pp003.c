//pp003:
//Write a program to input a number and check it to be even and odd using bitwise operator.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	if(a&1==0)
	printf("Odd");
	else
	printf("Even");
	return 0;
}
