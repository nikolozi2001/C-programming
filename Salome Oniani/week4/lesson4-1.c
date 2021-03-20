#include <stdio.h>
int main(){
short int n1 = -3;
unsigned short int n2 = 20;
unsigned int n3 = 25;
long int n4 = 390;
unsigned long int n5 = 39023;
long long int n6 = 212331;
unsigned long long int n7 = 12345698789;
printf("short int %hd --> unsigned short int %hu --> unsigned int %u --
> long int %ld --> undigned long int %lu --> long long int %lld --
> unsigned long long int %llu", n1, n2, n3, n4, n5, n6, n7);
return 0;
}