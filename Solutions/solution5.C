/* Write a program to enter any number and check it is prime or not
Date:24/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	printf("\n Enter any value:");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("\nThis is not a prime number");
	else
		printf("\n This is a prime number");
	getch();
}