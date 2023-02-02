#include <stdio.h>

int main(){
    int digit, rem,rev=0;
    printf("Enter five-digits number : ");
    scanf("%d", &digit);

    while(digit != 0){
        rem = digit%10;
        rev = (rev*10)+rem;
        digit /= 10;
    }

    printf("Reverse : %d", rev);
}