#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();
	printf("enter the value c:");
	scanf("%f",&c);

	f=(c*9/5)+32;
	printf("%.2f",f);
	getch();
}