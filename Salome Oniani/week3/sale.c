#include <stdio.h>
int main() {
printf("\n\tHow much should the customer pay? ");
float sumCost;
scanf("%f", &sumCost);
if (sumCost > 100 && sumCost <=200)
{
printf("\n\tCustomer should pay %.2f", sumCost*0.9);
}
if (sumCost > 200)
{
printf("\n\tCustomer should pay %.2f", sumCost*0.8);
}
if (sumCost <= 100)
{
printf("\n\tCustomer should pay %.2f", sumCost);
}
return 0;
}