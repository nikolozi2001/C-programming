#include <stdio.h>

int n1;

int main() {
    int n2 = 33.8;
    printf("enter celsius ");
    
    scanf("%d", &n1);

    printf("%d*%d = %.3f\n", n1, n2, (float) n1*n2);


    return 0;
}