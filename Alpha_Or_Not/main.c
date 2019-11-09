#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("Enter your Letter : ");
    scanf(" %c",&letter);

    if ((letter>=65 && letter<=90)||(letter>=97 && letter<=122)){
        printf("Letter is Alpha !");

    }
    else{
            printf("Letter isn't Alpha ! ");
        }
    return 0;
}
