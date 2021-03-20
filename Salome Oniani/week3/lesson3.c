#include <stdio.h>
int n1, n2;
int main() {
    printf("Please, enter two number -> ");
    scanf("%d %d", &n1, &n2);
    printf("%d==%d --> %d\n", n1, n2, n1==n2);
    printf("%d!=%d --> %d\n", n1, n2, n1!=n2);
    printf("%d>%d --> %d\n", n1, n2, n1>n2);
    printf("%d>=%d --> %d\n", n1, n2, n1>=n2);
    printf("%d<%d --> %d\n", n1, n2, n1<n2);
    printf("%d<=%d --> %d\n", n1, n2, n1<=n2);
  
    return 0;
}