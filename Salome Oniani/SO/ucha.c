#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for(i=0 ; str[i]!='\0'; i++){    
    if(str[i]=='X' ||str[i]=='x')
    str[i] = 'z';
}
printf("Your string is: %s", str);
sleep(3);
return 0;
} 