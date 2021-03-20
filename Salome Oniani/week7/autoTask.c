#include <stdio.h>
#include <string.h>

struct car{
    char brend[20];
    char color[15];
    char enginePower;
    double carNumber;
    }car1;



int main() {

        printf("enter enter car brend");
        scanf("%s", &car1.brend);
        printf("enter car color");
        scanf("%s", &car1.color);
        printf("enter car engine power");
        scanf("%f", &car1.enginePower);
        printf("enter car number");
        scanf("%d", &car1.carNumber);
        
        printf("Your car brend is is%s\n", car1.brend);
        printf("Your car color is%d\n",car1.color);
        printf("Your car engine power is%c\n",car1.enginePower);
        printf("Your car number is\n")
    

    return 0;
}