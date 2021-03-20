#include<stdio.h>
struct car{
    char brand [20];
    char color [10];
    float power;
    char number [10];
    } cars[10];
int main(){
    printf("Enter your favourite cars :) \n");
    
    for (int i = 0; i < 3; i++){
        printf("Car %d\n", i+1);
        printf("Brand --> ");   
        scanf("%s", &cars[i].brand);
        printf("Color --> ");   
        scanf("%s", &cars[i].color);
        printf("Power --> ");   
        scanf("%f", &cars[i].power);
        printf("Number --> ");  
        scanf("%s", &cars[i].number);
    }
   printf("\n\nYour favourite cars are \n");
    printf("Car\t\t\tBrand\t\t\tColor\t\t\tPower\t\t\tNumber\n");
    for (int i = 0; i < 3; i++){
        printf("Car %d", i+1);  
        printf("\t\t\t%s", cars[i].brand);  
        printf("\t\t\t%s", cars[i].color);  
        printf("\t\t\t%.1f", cars[i].power);
        printf("\t\t\t%s", cars[i].number);
        printf("\n");
    }
    
    return 0;
}