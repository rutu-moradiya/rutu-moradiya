#include<stdio.h>
#include<conio.h>
main()
{
	int rn,sum,per,grade;
	float m1,m2,m3;
	clrscr();
	printf("enter marks 1:");
	scanf("%.2f",&m1);
	printf("enter marks 2:");
	scanf("%.2f",&m2);
	printf("enter marks 3:");
	scanf("%.2f",&m3);

	sum=m1+m2+m3;
	per=(sum/300)*100;
	if(per>=90)
	{
		grade = 'A';
	}
	else if(per>=80)
	{
		grade = 'B';
	}
	else if(per>=70)
	{
		grade = 'C';
	}
	else if(per>=60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	{

	printf("rn :%d\n",rn);
	printf("sum marks :%.2f",sum);
	printf("per :%.2f",per);
	printf("grade : %d",grade);
	getch();
}