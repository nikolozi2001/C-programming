#include <stdio.h>
#include <string.h>
int main() 
{
    int arr[10];
    printf("Please enter 10 munbers \n ");
    for (int i = 0; i < 10; i++)
    {
        printf("enter number %d - ", i+1);
        scanf("%d", &arr[i]);
    }    int max=arr[0];    for(int i=1; i<10; i++){
        if(max<arr[i]) max = arr[i];
    }
int doubled [max+1];
    memset(doubled, 0, sizeof(doubled)); 
    for(int i=0; i<10; i++) doubled[arr[i]]++;    int m = doubled[0];
    int index = 0;
    for(int i=1; i<=max; i++){
        if(m<doubled[i]) {
            m = doubled[i];
            index = i;
            }
    }    printf("\nthe most repeated number is %d", index);
    
 return 0;
}