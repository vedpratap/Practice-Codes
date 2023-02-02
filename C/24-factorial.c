#include <stdio.h>

/*Write a program to find the factorial value of any number 
entered through the keyboard.  */

int main(){
   int n, fact=1;

   printf("Enter the Number : ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++){
      fact *= i;
   }

   printf("Factorial Value: %d", fact);
   return 0;

}