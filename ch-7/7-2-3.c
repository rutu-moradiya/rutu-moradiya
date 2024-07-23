#include<stdio.h>
int main()
{
    int i,n;
   
    printf("enter the value i :");
    scanf("%d",&i);
     printf("enter the value n :");
    scanf("%d",&n);
    
    do
    {
        if(i%2==0)
        {
            printf("%d\n",i);    
        }
        i++;
    }while(i<=n);
}