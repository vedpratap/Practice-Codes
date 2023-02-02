#include <stdio.h>
#include <stdlib.h>

int main()
{
    int class, failed;
    printf("Enter Class as 1, 2 & 3: ");
    scanf("%d", &class);
    printf("Number of subject failed : ");
    scanf("%d", &failed);

    switch (class){
        case 1:
            {
                if (failed > 3){
                    printf("No grace Marks.");
                }
                else{
                    printf("Grace Marks (5/sub) : %d", failed*5);
                }
            }
            break;
        case 2:
            {
                if (failed > 2){
                    printf("No grace Marks.");
                }
                else{
                    printf("Grace Marks (4/sub) : %d", failed*4);
                }
            }
            break;
        case 3:
            {
                if (failed > 1){
                    printf("No grace Marks.");
                }
                else{
                    printf("Grace Marks (5/sub) : %d", failed*5);
                }
            }
            break;
    }
}