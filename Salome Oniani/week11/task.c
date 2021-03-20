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
    if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o'
    ||str[i]=='u')
    str[i] = '*';
}
printf("Your string is: %s", str);
sleep(3);
return 0;
} 