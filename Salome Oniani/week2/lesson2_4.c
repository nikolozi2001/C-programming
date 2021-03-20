#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>

int n1 = 0, n2;

int main() {
    printf("chaifiqre ricxvi\n");
    sleep(3);
    printf("mimate 20\n");   

    n1 +=20;
    sleep(3);
    printf("gamoakeli 7\n");  

    n1 -=7;
    sleep(3);
    printf("miumate 5\n");

    n1 +=5; 
    printf("ra miige ? ");
    scanf("%d", &n2);
    sleep(4);
    printf("\nshen chaifiqre %d\n", n2-n1);
    
    system("pause");
    return 0;
}