#include<stdio.h>
int main()
{
    int num,i;
    int fac=1;
    printf("enter a number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fac*=i;
    }
    printf("fac of number 1 to %d : %d\n",num,fac);
}