#include <stdio.h>
#include <string.h>
int main( ) {
   char word[200];
   printf("type the message ");
   gets(word);
   int counter = 0;
   for(int i=0; i<strlen(word); i++){
       if(word[i] == ' ')
       counter++;
   }
   printf("your massage has %d words", counter+);
   return 0;
}