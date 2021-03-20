#include <stdio.h>

int n1, n2;

int main() {
    printf("enter two number ");
    
    scanf("%d %d", &n1, &n2);
    int c = n1-n2;
    printf("n1-n2 = %d", c);
    
    c *= 2;
    
    printf("\nc = %d", c);
    
    return 0;
}