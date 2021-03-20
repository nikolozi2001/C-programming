#include<stdio.h>
 struct products{
    char species [20];
    char name [10];
    float price;
    char pCode [10];
     } products[10];
int main(){
    int q;
    printf("Number of products:  \n");
    scanf("%d", &q);
    printf("Enter your products: \n");
    
    for (int i = 0; i < q; i++){
        printf("products %d\n", i+1);
        printf("Species --> ");   
        scanf("%s", &products[i].species);
        printf("Name --> ");   
        scanf("%s", &products[i].name);
        printf("Price --> ");   
        scanf("%f", &products[i].price);
        printf("pCode --> ");  
        scanf("%s", &products[i].pCode);
    }
   printf("\n\nYour products are \n");
    printf("product\t\t\tSpecies\t\t\tName\t\t\tPrice\t\t\tNumber\n");
    for (int i = 0; i < 3; i++){
        printf("products %d", i+1);  
        printf("\t\t\t%s", products[i].species);  
        printf("\t\t\t%s", products[i].name);  
        printf("\t\t\t%.1f", products[i].price);
        printf("\t\t\t%s", products[i].pCode);
        printf("\n");
    }
    
    return 0;
}