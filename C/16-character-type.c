#include <stdio.h>

int main(){
   char value;

   printf("Enter character : ");
   scanf("%c", &value);

   int ascii_value = value;
   if (ascii_value >=65 && ascii_value <= 90){
      printf("Capital Letter.");
   }
   else if (ascii_value >=97 && ascii_value <= 122){
      printf("Small case Letter.");
   }
   else if (ascii_value >=48 && ascii_value <= 57){
      printf("Digit.");
   }
   else{
      printf("Special Character.");
   }
   return 0;
}