#include <stdio.h>

int main(){
    int digit, rev=0, rem1,rem2, new;
    printf("Enter five digit number : ");
    scanf("%d", &digit);
    
    while(digit != 0){
        rem1 = digit%10;
        rev = (rev*10)+rem1;
        digit /= 10;
    }
    
    while (rev != 0){
        rem2 = ((rev%10)+1)%10;
        new = (new*10)+rem2;
        rev /= 10; 
    }

    printf("New Number = %d", new);
}