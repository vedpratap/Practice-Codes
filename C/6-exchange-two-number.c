#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a & b : ");
    scanf("%d %d", &a, &b);

    int temp = a;
    a = b;
    b = temp;

    printf("a : %d & b : %d",a,b);
}