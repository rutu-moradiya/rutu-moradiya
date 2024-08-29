#include<stdio.h>
#include<conio.h>
main()
{
	int y1,a;
	clrscr();

	printf("enter the year 1 :");
	scanf("%d",&y1);

	if(a=y1%4)
	{
	       printf("its leap year ");
	}
	else
	{
		printf("its not leap year");
	}

	getch();
}