#include <stdio.h>

/*Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255.*/

int main(){
   int i = 0;
   while(i < 256){
      printf("ASCII Value : %d & Character : %c\n", i,i);
      i += 1;
   }
   return 0;
}

