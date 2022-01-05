/* Write a program to enter  any number and print sum of it is digits\
Date:22/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,sum=0;
	clrscr();
	printf("\n Enter value  for a");
	scanf("%d",&a);
	while(a>0)
	{
	  r=a%10;
	  sum=sum+r;
	  a=a/10;
	}
	printf("\n Sum of digits: %d",sum);
	getch();
}