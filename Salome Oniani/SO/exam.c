#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("file.txt","r");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter num: ");
   fscanf(fptr,"%d", &num);
   printf("Value of n=%d", num);
   fclose(fptr);

   sleep(5);
   return 0;
}