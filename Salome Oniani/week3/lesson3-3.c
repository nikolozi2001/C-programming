#include <stdio.h>
int n;
int main() {
printf("Please, enter a number -> ");
scanf("%d", &n);
printf("state of the logic --> %d\n", n%8 == 0 || n/8 == 7);
return 0;
}