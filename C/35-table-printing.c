#include <stdio.h>

/*Write a program to print the multiplication table of the 
number entered by the user. The table should get displayed in 
the following form. 
 29 * 1 = 29 
 29 * 2 = 58 
 …  */


int main(){
    int n,res;
    printf("Enter Number : ");
    scanf("%d", &n);
    for(int i=1; i <=10; i++){
        printf("%d * %d = %d\n", n,i,n*i);
    }
}