#include <stdio.h>

int main(){
   int a,b,c;

   printf("Enter three sides of a triangle : ");
   scanf("%d %d %d", &a, &b, &c);
   
   if ((a+b)>c && (b+c)>a && (a+c)>b){
      if (a==b && b==c && c==a){
         printf("Equilateral Triangle.");
      }
      else if (a==b || b==c || c==a){
         printf("Isosceles Triangle.");
      }
      else if ((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b)){
        printf("Right Angle Triangle");
      }
      else if (a!=b && b!=c && c!=a){
         printf("Scalene Triangle");
      }
      else{
         printf("Any other type.");
      }
   }
   else{
      printf("Invalid Triangle.");
   }

   return 0;

}