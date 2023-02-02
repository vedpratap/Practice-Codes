#include <stdio.h>

/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour. */

int main(){
   int hrs[10]; int overpay=0;
   
   for (int i = 0; i < 10; i++){
      scanf("%d", &hrs[i]);
   }
   
   for (int j = 0; j < 10; j++){
      if (hrs[j] > 40){
         overpay += (hrs[j]-40)*12;
      }
   }
   
   printf("Total OverPay : %d", overpay);
   return 0;

}