#include <stdio.h>

int n1;

int main() {
    printf("enter five number\n");

    scanf("%d", &n1);

    printf("%d", n1>=10000 && n1<100000);

    return 0;
}