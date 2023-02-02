#include <stdio.h>

int main(){
   int days;

   printf("Enter Number of days : ");
   scanf("%d", &days);

   if (days > 30){
      printf("Membership Cancelled.");
   }
   else if (days > 10 && days <= 30){
      printf("Fine = 5 Rupees");
   }
   else if (days >= 6 && days <= 10){
      printf("Fine = 1 Rupee");
   }
   else if (days >= 1 && days <= 5){
      printf("Fine = 50 paise");
   }
   else {
      printf("No Fine!!");
   }
   
   return 0;

}