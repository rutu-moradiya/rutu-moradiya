#include <stdio.h>

int main() 
{
    int n = 10;
    int a = 1;
    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", a);
        a += 8;
    }
    printf("\n");

}