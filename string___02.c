/* WAP in C to enter any desire sentence and prnt along with the sentence "Hellow World".
                                           
                                           
                                For ex-INPUT :: Enter Your Desire Sentence: 
                                                Soumya Sarkar is a good boy.
                                                
                                      OUTPUT :: Hellow World!
                                                Soumya Sarkar is a good footballer.            */



#include <stdio.h>
int main()
{
    char name[500];
    printf ("Enter Your Desire Sentence:\n");
    gets(name);
    printf ("Hellow World! \n");
    printf("%s",name);
}                                               