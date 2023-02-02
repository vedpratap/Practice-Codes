#include <stdio.h>

/*Write a program to add first seven terms of the following 
series using a for loop: (n/n!) */

int fact(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int i,n; float sum=0.0;
    printf("Enter no. of terms : ");
    scanf("%d", &n);

    for (i=1;i<=n; i++){
        sum += ((float)i/fact(i));
    }
    printf("Results : %f", sum);
}