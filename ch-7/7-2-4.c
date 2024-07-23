#include<stdio.h>
int main()
{
    int a;
    int num;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter num :");
    scanf("%d",&num);

    printf("mul. table of %d\n",num);
    for( ; a<=10 ; a++ )
    {
        printf("%d*%d=%d\n",num,a,a*num);
    } 
}