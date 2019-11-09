#include <stdio.h>
#include <stdlib.h>

int main()
{
while(1)
    {
        int choice;
        char plain_text[20] , Cipher_text[20];
        int key ,i, x;
        printf("Enter Your Choice :- ");
        printf("\nEnter (0) For Encryption .. \nEnter (1) For Decryption .. \n");
        scanf("%d" , &choice);
        switch(choice)
            {
                case 0:
                    printf("\nEnter Your Plain Text : - ");
                    scanf("%s",plain_text);
                    printf("\nEnter Your Key :- ");
                    scanf("%d",&key);
                    if(plain_text[i]!='\0')
                    {
                        for(i = 0 ; i<(sizeof(plain_text) / sizeof(plain_text[0])) ; i++)
                            {

                                        if((plain_text[i]<=90)&&(plain_text[i]>=65))
                                        {
                                            // Upper Case
                                          x =(plain_text[i]+key);
                                          if(x>90)
                                            {
                                                x=x-26;
                                            }
                                          Cipher_text[i] = (char)x;
                                        }

                            }
                    }

                        //Cipher_text[i]='\0';
                        printf("\nYour Cipher Text is :  ");
                        puts(Cipher_text);
                    break;
                default:
                    break;
            }

    }
    return 0;
}
