#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
  char n[100];
  printf("Please enter the string: ");
  gets(n);

  int i = strlen(n)-1;

  for(i; i>=0; i--)
    if(n[i] ==' ') continue;
	else
	   printf("%c", n[i]);

    sleep(5);
   return 0;
}