#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[])
{
    /* Define a variable and set it to 'b' */
    int letter = 'b';

    /* Display a lowercase 'b' */
    printf("Uppercase '%c' is '%c'\n", letter, toupper(letter));

    return 0;
}