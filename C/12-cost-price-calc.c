#include <stdio.h>

int main(){
    float sp, prof, cp;
    printf("Enter Selling Price (15 Items) : ");
    scanf("%f", &sp);
    
    printf("Enter Profit on them : ");
    scanf("%f", &prof);

    cp = (sp-prof)/15;
    
    printf("Cost Price of One item = %.2f",cp);
}