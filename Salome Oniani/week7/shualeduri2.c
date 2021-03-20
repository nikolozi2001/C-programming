#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=8;i++){
    for(j=1;j<=8;j++){
        
        if((i==1 || i==8  || j==1|| j==8) || (i>=3 && i<=7 && j>=3 && j<=7)) {
            printf(" #");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
}
return 0;
}