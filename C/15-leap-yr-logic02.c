#include <stdio.h>

int main(){
   int year;

   printf("Enter the year : ");
   scanf("%d", &year);

   if (year%400==0 || year%100!=00 && year%4==0){
    printf("It is a Leap Year");
   }
   else{
    printf("It is not Leap Year");
   }

}