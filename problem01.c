#include<stdio.h>
int main()
{
    char ch[500];
    int de;
     printf ("Enter your string\n");
    gets (ch);             // storing the sentence input by the user
    printf ("Enter your integer\n");
    scanf("%d",&de);                    // storing the input integer input by the user
  
    int n = de*2;       // multiplication of the integer 
    printf ("%d\n",n);         //output of the integer
    printf ("%s\n\t",ch);      //output of the string stored by the user
  
    return 0;
}