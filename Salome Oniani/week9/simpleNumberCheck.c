#include <stdio.h>
int main() {

    int x, simple = 1;
    scanf("%d", &x);
    for(int i = 2; i < x; i++) {
        if( x%i == 0 ) {
            simple = 0;
            break;
        }
    }
    
    if(simple) printf("The number %d is simple", x);
    else printf("The number %d is not simple", x);
    
    return 0;
}