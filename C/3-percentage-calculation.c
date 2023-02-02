#include <stdio.h>

int main(){
    float m1, m2, m3, m4, m5, total, per;
    printf("Enter Marks : ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = (m1+m2+m3+m4+m5);
    per = (total*100)/500;
    
    printf("Total Marks : %.2f\n",total);
    printf("Percentage : %.2f\n",per);
}