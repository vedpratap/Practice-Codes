#include <stdio.h>

/*Write a program to print all prime numbers from 1 to 300.
(Hint: Use nested loops, break and continue) */

int main(){
    int i,j,fact,n;
    printf("Enter upto which number : ");
    scanf("%d", &n);
    printf("Prime Numbers are : ");
    for (i=1; i<=n; i++){
        fact = 0;
        for (j=1; j<=i; j++){
            if (i%j == 0){
                fact += 1;
            }
        }
        if (fact == 2){
            printf("%d ", i);
        }
    }
}
