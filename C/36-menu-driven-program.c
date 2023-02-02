#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    while (1)
    {
        printf("\nChoice 1 : Factorial\n");
        printf("Choice 2 : Prime\n");
        printf("Choice 3 : Odd/Even\n");
        printf("Choice 4 : Exit\n");
        printf("Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            {
            int n, fact = 1;
            printf("Enter Number : ");
            scanf("%d", &n);
            while (n != 0){
                fact *= n;
                n--;
            }
            printf("Factorial : %d", fact);
            }
            break;
        
        case 2:
            {
            int num, res = 1;
            printf("Enter Number : ");
            scanf("%d", &num);
            for (int i = 2; i<num; i++){
                if (num%i == 0){
                    res = 0;
                    break;
                }
            } 
            if (res == 1){
                printf("It is a prime number.");
            }
            else{
                printf("It is not a prime number.");
            }
            }
            break;

        case 3:
            {
            int num1;
            printf("Enter Number : ");
            scanf("%d", &num1);
            if (num1%2 == 0){
                printf("It is an even number.");
            }
            else{
                printf("It is a odd number.");
            }
            }
            break;
        
        case 4:
            printf("Exit");
            break;
        }
    }
}