#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main() {
    int P_One;
    int P_Two;
    int Con;
    char One;
    char Two;

    while ((P_One <= 3 || P_Two <= 3) && Con > 0)
    {

        printf("\n *** Player one ***\n");
        printf(" Enter your movement : ");
        scanf("%c",&One);
        Sleep(2);

        printf(" *** Player two ***\n");
        printf("Enter your movement : ");
        scanf("%c",&Two);
        scanf("%c",&Two);

        Sleep(2);
        if (One == 't' && Two == 'p'){
            printf("\n The player one won !! \n ");
            P_One = P_One + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }
        else if (One == 't' && Two == 's')
        {
            printf("\n The player two won !! \n");
            P_Two = P_Two + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }
        else if (One == 's' && Two == 'p')
        {
            printf("\n The player two won !! \n");
            P_Two = P_Two + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }
        else if (One == 's' && Two == 't')
        {
            printf("\n The player one won !! \n");
            P_One = P_One + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }
        else if (One == 'p' && Two == 't')
        {
            printf("\n The player two won !! \n");
            P_Two = P_Two + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }
        else if (One == 'p' && Two == 's')
        {
            printf("\n The player one won !! \n");
            P_One = P_One + 1 ;
            printf("If you want to continue the game, enter 1 and otherwise 0 : ");
            scanf("%d",&Con);
        }else if (One == 's' && Two=='s'){
            printf("\n  No points ");
        }else if (One == 't' && Two=='t'){
            printf("\n  No points ");
        }else if (One == 'p' && Two=='p'){
            printf("\n  No points ");
        }
    }

    printf("\n Game Scores \n");
    printf(" -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ \n");
    printf("Player One : %d  .\n",P_One);
    printf("Player Two : %d  .\n",P_Two);
    if (P_One>P_Two)
        printf("Player 1 Winner");
    else
        printf("Player 2 Winner");

    return 0;
}