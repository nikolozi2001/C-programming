#include <stdio.h>


int main(){
int p, m1, m2, f;
printf("shemoitanet praqtikuli gamodis qula ");
scanf("%d", &p);

printf("shemoitanet shualeduri 1 gamodis qula ");
scanf("%d", &m1);

printf("shemoitanet sualeduri 2 gamodis qula ");
scanf("%d", &m2);
if(p+m1+m2 > 21){

  printf("shemoitanet finaluri gamodis qula ");
  scanf("%d", &f);
  if(f>12 && p+m1+m2+f >51){
    printf("studentma chaabara gamocda");
  } else{
    printf("studenti unda gavides ganmeorebit gamocdaze");
  }

} else
{
  printf("studenti ver gava finalur gamocdaze");
}
return 0;
}