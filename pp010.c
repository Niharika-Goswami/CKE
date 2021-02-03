//pp010
//Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the number is even else  it returns 0.
//Write a program pp010.c,include he header file into it.Create the main function to input a number and check it to be even or odd using iseven() function.
#include<stdio.h>
#include"pp010.h"
int main()
{
	int a,x;
	printf("Enter the number: ");
	scanf("%d",&a);
	x=iseven(a);
	if(x==1)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
