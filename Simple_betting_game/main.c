#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    simple Betting Game --
    Queen , King , Jack  -- Computer Will Shuffle These Cards
    Player Should Guess Where is the Queen
    if He Wins  -- he wins 3*Bet
    else He Loses amount of Bet
    Player Has 100$ initially
*/
int cash = 100;
void Play(int bet)
{
    char*c =(char*)malloc(3*sizeof(char));
    c[0]='J';c[1]='K';c[2]='Q';

    printf("Shuffling ... ");
    srand(time(NULL));
    int i =0 ;
    for( i =0 ; i<5 ; i++)
        {
            int x = rand()%3;
            int y = rand()%3;
            int temp = c[x];c[x]=c[y];c[y]=temp;
        }
        int PlayerGeuss ;
        printf("\nWhat is The Position Of Queen ! : 1 , 2 OR 3 --  ");
        scanf("%d",&PlayerGeuss);
        if(c[PlayerGeuss-1] == 'Q')
            {
                cash+=(3*bet);
                printf("\nGreat You Won ! -- Result = %c %c %c AND Total Cash = %d" , c[0] , c[1] , c[2] , cash);
            }else
            {
                cash-=bet;
                printf("\nOh Sorry You Loose !  -- Result = %c %c %c AND Total Cash = %d" ,c[0] , c[1] , c[2] , cash);
            }
            free(c);
}

int main()
{
    int bet;
    printf("Welcome To Simple Betting Game -- Good Luck :D  \n");
    printf("Your Cash is = %d\nSo Let's Play .. ",cash);

    while(cash > 0)
        {
            printf("\nWhat is Your Bet ?! ");
            scanf("%d",&bet);
            if(bet <= 0 || bet > cash ){
                printf("\nDon't Steal -- ");
                break;
            }
            else
                {
                  Play(bet);
                }
            printf("\n*********************************************\n");
        }
    return 0;
}
