/* Write a program to enter any number and check its an Armstrong number or not
Date: 27/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any value:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=c+b*b*b;
		a=a/10;
	}
	if(d==c)
	  printf("\n It is an Armstrong number");
	else
	  printf("\n It is not an amstrong number:");
	getch();
}