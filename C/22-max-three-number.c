#include <stdio.h>

int main(){
   int a,b,c,max_num;

   printf("Enter three numbers : ");
   scanf("%d %d %d", &a, &b, &c);
   
   if (a > b && a > c){
      max_num = a;
   }
   else if (b>c){
      max_num = b;
   }
   else{
      max_num = c;
   }
   printf("Maximum No. : %d", max_num);
   return 0;

}