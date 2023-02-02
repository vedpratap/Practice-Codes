#include <stdio.h>

int main(){
    int amt, h,f,t;
    printf("Enter Amount in hundred : ");
    scanf("%d", &amt);

    h = amt/100;
    f = (amt-(h*100))/50;
    t = (amt-(h*100 + f*50))/10;

    printf("Hundreds : %d Fifty : %d Tens : %d",h,f,t);
}