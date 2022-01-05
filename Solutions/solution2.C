/* Write a program to enter any number and print it in reverse
Date:22/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,c=0;
	clrscr();
	printf("\n Enter value for a:");
	scanf("%d",&a);
	while(a>0)
	{
	   r=a%10;
	   c=c*10+r;
	   a=a/10;
	}
	printf("\n Reverse number is %d",c);
	getch();
}