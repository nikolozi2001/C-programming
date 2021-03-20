#include <stdio.h>

int main(void) {
    int number;
    int numbers[10];
    int min = 0;
    int max = 0;

    printf("Input the 10 numbers : \n");
    for (int i = 1; i <= 10; i++)
    {
      printf("Enter Number-%d :",i);

      scanf("%d", &number);
      numbers[i - 1] = number;
      if (i == 1) {
        min = number;
        max = number;
      }
      
      if (number < min) {
        min = number;
      }

      if (number > max) {
        max = number;
      }
    }
    
    printf("Max - Min = %d", max - min);
}