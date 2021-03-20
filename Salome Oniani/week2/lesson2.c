#include <stdio.h>

int day, month, year;

int main() {
    printf("შემოიტანეთ დღევანდელი თარიღი შემდეგი ფორმატით dd/mm/yy ");
    
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("მადლობა ანუ დღეს არის  %d/%d/%d", day, month, year);
    
    return 0;
}