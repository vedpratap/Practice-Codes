#include <stdio.h>

int main(){
   char gender,place, health;
   int age;

   printf("Enter your health(E/P), place(C/V), gender(M/F), age: ");
   scanf("%c %c %c %d", &health, &place, &gender, &age);
   
   if ((int)health == 69 && age > 25 && age < 35 && (int)place == 67 && (int)gender == 77){
      printf("Person is Insured.\n");
      printf("Premium : Rs.4 per thousand.\n");
      printf("MAXm Policy Amount : 4 Lakhs");

   }
   else if ((int)health == 69 && age > 25 && age < 35 && (int)place == 67 && (int)gender == 70){
      printf("Person is Insured.\n");
      printf("Premium : Rs.3 per thousand.\n");
      printf("MAXm Policy Amount : 3 Lakhs\n");
   }
   else if ((int)health == 80 && age > 25 && age < 35 && (int)place == 86 && (int)gender == 77){
      printf("Person is Insured.\n");
      printf("Premium : Rs.6 per thousand.\n");
      printf("MAXm Policy Amount : 10,000");
   }
   else{
     printf("Person is not Insured."); 
   }
}