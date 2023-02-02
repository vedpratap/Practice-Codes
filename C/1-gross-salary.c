#include <stdio.h>

int main(){
    float sal, g_sal, d_all, hr_all;
    printf("Enter salary : ");
    scanf("%f", &sal);

    d_all = 0.4*sal;
    hr_all = 0.2*sal;

    g_sal = sal+(d_all+hr_all);

    printf("Gross Salary : %.2f",g_sal);
}