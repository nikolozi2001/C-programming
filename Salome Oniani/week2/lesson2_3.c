#include <stdio.h>

int n1;

int main() {
    printf("შემოიტანე სამნიშნა რიცხვი ");
    
    scanf("%d", &n1);
    
    printf("\n%d = %d+%d+%d",n1, n1 - n1%100, (n1- (n1-n1%100))-(n1- (n1-n1%100))%10, n1%10);
    
    return 0;
}