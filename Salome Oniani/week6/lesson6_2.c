#include <stdio.h>
#include <stdlib.h>
void main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int k = i; k < 9; k++)
        printf(" ");
        for (int j = 1; j < 2*i+1; j++)
        {
        if(i-j+1 == 0) continue;
        if(i-j+1 <0)
        printf("%d",(i-j)*(-1));
        else
        printf("%d",i-j+1);
        }
        printf("\n");
    }
}