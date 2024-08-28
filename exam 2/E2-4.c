#include<stdio.h>
int main()
{
    int sum=0,div=0,mod=0,mul=0,sub=0,cal,a,b;
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the number :");
    scanf("%d",&b);

    printf("1)sum\n");
    printf("2)sub\n");
    printf("3)mod\n");
    printf("4)div\n");
    printf("5)mul\n");
    scanf("%d",&cal);
    switch(cal)
    {
        case 1 : printf("add\n");
            printf("sum of %d and %d :%d\n",a,b,a+b);
            break;
        case 2 : printf("sub\n");
            printf("sub of %d and %d :%d\n",a,b,a-b);
            break;
        case 3 : printf("mod\n");
            printf("mod of %d and %d :%d\n",a,b,a%b);
            break;        
        case 4 : printf("div\n");
            printf("div of %d and %d :%d\n",a,b,a/b);
            break;
        case 5 : printf("mul\n");
            printf("mul of %d and %d :%d\n",a,b,a*b);
            break;    
    }

}