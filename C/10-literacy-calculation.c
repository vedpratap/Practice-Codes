#include <stdio.h>

int main(){
    int total_pop, total_men, total_lit, lit_men, ulit_men, ulit_women;
    printf("Enter total population : ");
    scanf("%d", &total_pop);

    total_men = 0.52*total_pop;
    total_lit = 0.48*total_pop;
    lit_men = 0.35*total_men;
    ulit_men = total_men - lit_men;
    ulit_women = (total_pop - total_men)-(total_lit - lit_men);

    printf("Illiterate Men : %d\n", ulit_men);
    printf("Illiterate Women : %d", ulit_women);
}