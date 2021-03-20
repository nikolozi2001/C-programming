#include <stdio.h>
#include <math.h>

int main() {
  printf("enter number");
    unsigned long long int  n = 0;
    int digits = 0;
    scanf("%llu", &n);
    unsigned long long int  number = n;
    while (number) {
        number /= 10;
        digits++;
    }
    
    while (digits) {
        unsigned long long int  power = pow(10, digits - 1);
        unsigned long long int  comp = n / power;
        n = n % power;
        printf("%llu+", comp * power);
        digits--;
    }
    return 0;
}