#include <stdio.h>

/*Write a function to calculate the factorial value of any integer 
entered through the keyboard.*/

int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Factorial : %d", fact(n));
}