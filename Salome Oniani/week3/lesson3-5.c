#include <stdio.h>
int main() {
printf("Welcome to Georgia Driver licence system\nPlease, enter your birthday date with the format dd/mm/yy ");
int bDay, bMonth, bYear;
scanf("%d/%d/%d", &bDay,&bMonth,&bYear);
if (2020 - bYear < 17 || 2020 - bYear >= 85)
{
printf("Sorry, you age is not appropriate for registering on the driver Licence exam ");
}
if(2020 - bYear >= 17 && 2020 - bYear < 85){
printf("\n\nWhen do you want to take the Driver Licence exam?\n Please, use the format dd/mm/yy -> ");
int eDay, eMonth, eYear;
scanf("%d/%d/%d", &eDay,&eMonth,&eYear);
printf("Thank you, please enter you ID number -> ");
double id;
scanf("%lf", &id);
printf("So, your Driver Licence exam is on %d/%d/%d and your register number is %.0f", eDay,eMonth, eYear, id);
}
return 0;
}