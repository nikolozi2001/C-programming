#include <stdio.h>

struct Studenti{
  char name[50];
  int age;
  float simagle;
  char gender;
}st1, st2;


int main() 
{
  struct Studenti st3;

  printf("asaki ");
  scanf("%d", &st1.age);

  st2 = st1;

  st1.age +=10;


  printf("%d   %d ", st2.age, st1.age);

    
 return 0;
}