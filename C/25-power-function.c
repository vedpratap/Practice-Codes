#include <stdio.h>
#include <math.h>

/*Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another.*/

int main(){
   int n1,n2,power=1;

   printf("Enter the Numbers : ");
   scanf("%d %d", &n1, &n2);

   for (int i = 1; i <= n2; i++){
      power *= n1;
   }

   printf("Power Value: %d\n", power);
   printf("Using Math Function : %.2f", pow(n1,n2));
   return 0;

}

