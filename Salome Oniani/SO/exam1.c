#include <stdio.h>
#include <unistd.h>
int main(){
int a[10],n,i;

printf("shemoitanet atobiti ricxvi: ");
scanf("%d",&n);
    for(i=0;n>0;i++)
        {
        a[i]=n%2;
        n=n/2;
        }
printf("\ntqveni ricxvi orobitshi aris: ");
    for(i=i-1;i>=0;i--) 
        {
        printf("%d",a[i]);
        }
    sleep(5);
    return 0;
}