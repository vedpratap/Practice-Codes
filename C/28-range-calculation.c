#include <stdio.h>
#include <math.h>

/*Write a program to find the range of a set of numbers. Range 
is the difference between the smallest and biggest number in 
the list.*/

int main(){
 int nums[15] = {12, 13, 45, 67, 3, 56, 87, 9, 23, 24, 57, 78, 97, 54, 76};
 int m1 = 1000, m2 = -1;

 for (int i=0; i < 15; i++){
   if (nums[i] < m1){
      m1 = nums[i];
   }
 }
 for (int i=0; i < 15; i++){
   if (nums[i] > m2){
      m2 = nums[i];
   }
 }

 int range = m2-m1;

 printf("Range : %d",range);
}

