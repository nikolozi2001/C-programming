#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

int main() {
    int* ptr;
    int n;

    printf("enter 8 element: \n");
    ptr = (int*)malloc(8 * sizeof(int));

    int i;
    for ( i = 1; i <= 8; i++)
    {
        printf("enter element: ");
        scanf("%d", &n);
        ptr[i] = n;
    }

    printf("decrasing: ");
    for ( i = 8; i > 0; i--)
    {
        printf("%d", ptr[i]);
    }
    
    sleep(5);

    return 0;
}