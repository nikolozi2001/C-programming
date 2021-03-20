#include <stdio.h>
#include <string.h>

struct pacient{
    char name[50];
    int age;
    char email[30];
    unsigned long int phone;
    double id;
    char gender;
    }pc1, pc2;



int main() {

        printf("enter pacient name");
        scanf("%s", &pc1.name);
        printf("enter pacient age");
        scanf("%d", &pc1.age);
        printf("enter pacient email");
        scanf("%s", &pc1.email);
        
        printf("Your name is%s\n", pc1.name);
        printf("Your age is%d\n",pc1.age);
        printf("Your email is%c\n",pc1.email);
    

    return 0;
}