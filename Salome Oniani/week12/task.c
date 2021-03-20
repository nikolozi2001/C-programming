#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int m =-1;
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for(i=0 ; str[i]!='\0'; i++){    
    if(str[i]=='@') {
    	m=i;
    	break;
	}  
}

printf("%d \n Your string is: %s", m, str);
return 0;
} 