#include<stdio.h>
int main()
{
    int r,c;
    printf("enter any row :");
    scanf("%d",&r);
    printf("enter any colum :");
    scanf("%d",&c);


    int a[r][c];

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0; j<c ; j++)
        {
            printf("enter a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0; j<c ; j++)
        {
            printf("%d",a[i][j]);     
        }
        printf("\n"); 
    } 
}


   