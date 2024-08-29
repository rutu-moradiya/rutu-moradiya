#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,sum;
	clrscr();
	printf("enter the n :");
	scanf("%d",&n);
	sum=i+n;
	printf("%d",sum);
	do
	{
		printf("%d\n",i++);
	}while(i<=n);
	getch();

}



