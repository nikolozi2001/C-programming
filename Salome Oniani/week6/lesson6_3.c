#include <stdio.h>
void main()
{  
       
  while (1)
  {
    printf("Enter any number ");
    int num;
    scanf("%d", &num);
    if (num%7 == 0) break;
    if(num%5==0) continue;
    printf("%d*%d = %d\n", num, num, num*num);
  }
   printf("Finish");
  
}