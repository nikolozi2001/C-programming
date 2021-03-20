#include <stdio.h>
int main() {
int eWeigth = 12.5;
printf("\n\tPlease, enter baggage weight");
float sumCost;
scanf("%f", &sumCost);
if (sumCost > 20 && sumCost <= 20)
{
printf("\n\tCustomer should pay %.2f", sumCost * eWeigth);
}
// if (sumCost < 20){
//     printf("\n\tCostumer should pay %.2f", sumCost * eWeigth);
// }

if (sumCost > 30)
{
printf("\n\tCustomer should pay %.2f", sumCost * eWeigth);
}

return 0;
}