#include <stdio.h>
int main(){
    printf("What amount of fuel did customer buy?");
    int liter;
    scanf ("%d", &liter);
    if(liter>10&&liter<=15){
    printf("Costumer will pay %.2f", 2.43*liter-2.43*0.01*liter);
    } else if(liter>15&&liter<=20){
    printf("Costumer will pay %.2f", 2.43*liter-2.43*0.02*liter);
    } else if(liter>20){
    printf("Costumer will pay %.2f", 2.43*liter-2.43*0.03*liter);
    } else if(liter<=10){
    printf("customer will pay %.2f", 2.43*liter);
    }
return 0;
}