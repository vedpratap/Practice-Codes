#include <stdio.h>
#define PI 3.14
int main(){
    float l,b,r,area_r, per_r, area_c, cir_c;
    printf("Enter length & breadth of rectangle : ");
    scanf("%f %f", &l, &b);
    printf("Enter the Radius of a circle : ");
    scanf("%f", &r);

    area_r = l*b;
    per_r = 2*(l+b);
    area_c = PI*r*r;
    cir_c = 2*PI*r;

    printf("Area of rectangle : %.2f\n",area_r);
    printf("Perimeter of rectangle : %.2f\n",per_r);
    printf("Area of circle : %.2f\n",area_c);
    printf("Circumference of circle : %.2f\n",cir_c);
}