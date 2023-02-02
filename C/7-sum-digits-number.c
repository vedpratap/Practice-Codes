#include <stdio.h>

int main(){
    int digit, sum=0;
    printf("Enter five-digits number : ");
    scanf("%d", &digit);

    while(digit != 0){
        sum += digit%10;
        digit /= 10;
    }

    printf("Sum of it's digit : %d", sum);
}