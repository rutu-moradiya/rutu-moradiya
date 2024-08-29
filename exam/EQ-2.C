#include<stdio.h>
#include<conio.h>
main()
{
	char day;
	clrscr();

	printf("1) monday\n");
	printf("2) tuesday\n");
	printf("3) wednesday\n");
	printf("4) thursday\n");
	printf("5) friday\n");
	printf("6) saturday\n");
	printf("7) sunday\n");
	scanf("%c",&day);

	switch(day)
	{
		case '1':
			printf("monday");
			break;
		case '2':
			printf("tuesday");
			break;
		case '3':
			printf("wednesday");
			break;
		case '4':
			printf("thursday");
			break;
		case '5':
			printf("friday");
			break;
		case '6':
			printf("saturday");
			break;
		case '7':
			printf("sunday");
			break;

	}
	getch();

}