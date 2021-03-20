#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
 struct Produqti {
        char nameOfProduct[50];
        char speciesOfProduct[50];
        float priceOfProduct;
    } allProducts[500];
int num;
int idx = 0;
void addProduct();
void listOfProducts();
void menu(){
    printf("menu: \n");
    printf("show products (1)\n");
    printf("add products (2)\n");
    scanf("%d", &num);
    system("cls");
    if(num == 1){
        listOfProducts();
    } else if(num == 2){
        addProduct();
    }
}


void addProduct(){
    printf("You add the products");
    printf("\n name ");
    scanf("%s", &allProducts[idx].nameOfProduct);
    printf("\n species ");
    scanf("%s", &allProducts[idx].speciesOfProduct);
    printf("\n price ");
    scanf("%f", &allProducts[idx].priceOfProduct);
    idx += 1;
    printf("You added product. select: menu (1) | see selected products (2)");
    scanf("%d", &num);
    system("cls");
    if(num == 1){
        menu();
    } else if(num == 2){
        listOfProducts();
    }
}

void listOfProducts(){
    if(idx == 0){
        printf("Product not found. you will return meniu");
        sleep(3);
        system("cls");
        menu();
    }else{
        for(int i=0; i<idx; i++){
            printf("\nproduct N%d\n", i+1);
            printf("name: %s \n", allProducts[i].nameOfProduct);
            printf("species: %s \n", allProducts[i].speciesOfProduct);
            printf("price: %f \n", allProducts[i].priceOfProduct);
        }
        printf("You see the products. select: menu (1) | add products (2)");
        scanf("%d", &num);
        system("cls");
        if(num == 1){
            menu();
        } else if(num == 2){
            addProduct();
        }
    }
    
}
int main(){   

    menu();

    return 0;
}