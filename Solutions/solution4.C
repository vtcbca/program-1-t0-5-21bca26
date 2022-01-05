/* Write a program to enter any number and check it is palindrom number or not
Date:24/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,s=0;
	clrscr();
	printf("\n Enter value for a");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		s=b+s*10;
		a=a/10;
	}
	if(c==s)
		printf("\nThe number is palindrom");
	else
		printf("\n The number is not palindrom");
	getch();
}
