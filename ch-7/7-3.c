#include<stdio.h>
int main()
{
    int num,i;

    printf("enter a number : ");
    scanf("%d",&num);

    int sum=0;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum of number for 1 to %d : %d\n",num,sum);
}