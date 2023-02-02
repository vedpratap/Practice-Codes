#include <stdio.h>

int main(){
    float fahn, cel;
    printf("Enter degree in Fahrenheit : ");
    scanf("%f", &fahn);

    cel = ((fahn-32.0)*5)/9;
    printf("Degree in Centigrade : %.2f\n",cel);
}