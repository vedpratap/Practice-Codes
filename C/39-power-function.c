#include <stdio.h>
#include <math.h>

/*Write a function power ( a, b ), to calculate the value of a
raised to b.*/

int power(int a, int b){
    return pow(a,b);
}

int main()
{
    int a, b;
    printf("Enter a & b : ");
    scanf("%d %d", &a, &b);
    printf("a to the power b : %d", power(a,b));
}