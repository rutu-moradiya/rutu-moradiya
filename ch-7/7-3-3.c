#include<stdio.h>
int main()
{
    int num,i;

    printf("enter any number :");
    scanf("%d",&num);
    printf("fac to %d :",num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
        }
   
    }

}