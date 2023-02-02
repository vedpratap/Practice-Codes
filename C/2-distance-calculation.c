#include <stdio.h>
int main(){
    float dist,met, feet, inch, cms;
    printf("Enter distance : ");
    scanf("%f", &dist);

    met = dist*1000;
    feet = dist*3280.84;
    inch = feet*12;
    cms = met*100;

    printf("Distance (KMs) : %.2f\n", dist);
    printf("Distance (Meters) : %.2f\n", met);
    printf("Distance (feet) : %.2f\n", feet);
    printf("Distance (inches) : %.2f\n", inch);
    printf("Distance (cms) : %.2f", cms);
}