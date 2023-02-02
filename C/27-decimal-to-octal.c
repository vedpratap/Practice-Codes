#include <stdio.h>

/*Write a program to find the octal equivalent of the entered 
number.*/

int main(){
  int num; int eqv[50];

  printf("Enter number : ");
  scanf("%d", &num);

  int i =0;
  while (num != 0){
   eqv[i] = num%8;
   num /= 8;
   i++;
  }

  for (int j=i-1; j >=0;j--){
   printf("%d",eqv[j]);
  }
}

