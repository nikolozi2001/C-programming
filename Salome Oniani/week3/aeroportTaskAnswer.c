#include <stdio.h>


int main(){

printf("ramdens iwonis momxmareblis bargi?");
float x;
scanf("%f", &x);

if( x>20 && x<31){
printf("momxmarebeli ixdis %.2f", (x-20)*12.5);
}
if(x>30){
printf("momxmarebeli ixdis %.2f", (x-30)*21.4);
}
if(x<=20){
printf("momxmarebeli ixdis %.2f", 0);
}

return 0;
}