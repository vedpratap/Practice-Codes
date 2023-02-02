#include <stdio.h>

int main(){
   float hardness, c_content, t_strength, grade = 0.0;

   printf("Enter Hardness, Carbon Content & Tensile Strength : ");
   scanf("%f %f %f", &hardness, &c_content, &t_strength);
   
   if (hardness > 50.0 && c_content < 0.7 && t_strength > 5600.0){
      grade = 10.00;
   }
   else if (hardness > 50.0 && c_content < 0.7){
      grade = 9.00;
   }
   else if (c_content < 0.7 && t_strength > 5600.0){
      grade = 8.00;
   }
   else if (hardness > 50.0 && t_strength > 5600.0){
      grade = 7.00;
   }
   else if (hardness > 50.0 || c_content < 0.7 || t_strength > 5600.0){
      grade = 6.00;
   }
   else{
      grade = 5.00;
   }

   printf("Grade : %.2f", grade);
   return 0;

}