//pp001
//Write a program to input a number and check it to be even or odd using if statement:
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
