#include <stdio.h>
#include <limits.h>
int main(){
	int min=2147483647;
	int max=0;
	int number;
	for(int i = 0; i<10;i++){
		scanf("%d",&number);
		if(number>max ){
			max = number;
		}
		if(number<min){
			min = number;
		}
		
		
	}
	printf("%d\n",max-min);
}