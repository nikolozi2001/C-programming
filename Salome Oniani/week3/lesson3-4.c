#include <stdio.h>

int main() {
    int number = 33.8;

    printf("enter celsius");
    
    scanf("%d", &number);

    printf("Farenheit is %f",(float) number*33.8);
  
    

    return 0;
}