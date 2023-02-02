#include <stdio.h>

int main(){
   int year;

   printf("Enter the year : ");
   scanf("%d", &year);

   int flag;

   if (year%4==0){
    if (year%100==0){
        if (year%400==0){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    else{
        flag = 1;
    }
   }
   else{
    flag = 0;
   }

   if (flag == 0){
    printf("It is not a Leap Year.");
   }
   else{
    printf("It is a Leap Year.");
   }

}