#include <stdio.h>
void main()
{       
  int bin, p=1;
  int dec=0,index=1,d;
  printf("Input a binary number : ");
  scanf("%d",&bin);
  for (int j=bin; j>0; j/=10)
  {  
          d = j % 10;
            if(index==1)
                p=p*1;
            else
                 p=p*2;
     dec += d*p;
     index++;
  }
        printf("\nThe Binary Number : %d\nThe equivalent Decimal  Number : %d \n\n",bin,dec);
}