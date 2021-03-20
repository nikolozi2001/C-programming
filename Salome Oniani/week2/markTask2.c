#include <stdio.h>

int number;

int main() {

    printf("enter numbers\n");

    scanf("%d", &number);

    printf("%d \n", number >= 100 && number<= 999 && number%5==0 ||  number >= 10000 && number <= 99999 && number%7==0);
    return 0;
}