#include <stdio.h>
int n;
int main() {
    printf("Please, enter a number -> ");
    scanf("%d", &n);
    printf("state of the logic --> %d\n", n > 10 && n < 100 && n%2 == 0);
    
  
    return 0;
}