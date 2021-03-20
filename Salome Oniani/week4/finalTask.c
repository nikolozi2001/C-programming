#include <stdio.h>
int main(){
    int number;
    printf("enter number \n");
    scanf("%d", &number);
    int copyOfNumber = number;
    int toDivide = 10;
    int tanrigi = 0;
    
    while(number >= 1){
        number /= toDivide;
        tanrigi += 1;
    }
    int base = 1;
    int index = 0;
    
    while(index < (tanrigi-1)){
        base *= 10;
        index += 1;
    }
    printf("%d =", copyOfNumber);
    
    while(index > 0){
        int nashti = copyOfNumber % base;
        base /= 10;
        index -= 1;
        printf(" %d +", copyOfNumber - nashti);
        copyOfNumber = copyOfNumber - (copyOfNumber - nashti);
    }
    
    printf(" %d",copyOfNumber);
    return 0;
}