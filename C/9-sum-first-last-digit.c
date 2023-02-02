#include <stdio.h>

int main(){
    int digit, sum=0;
    printf("Enter four-digits number : ");
    scanf("%d", &digit);

    sum += digit%10;

    while(digit > 9){
        digit /= 10;
    }

    sum += digit;

    printf("Sum of First & Last digit : %d", sum);
}