#include<stdio.h>
main()
{
    int i,year;

    printf("enter year 1 :");
    scanf("%d",&i);
    printf("enter year 2:");
    scanf("%d",&year);

    while( i<=year)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}