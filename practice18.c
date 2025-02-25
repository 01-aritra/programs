/* Enter name of 5 student ,his/her section and marks and print out his or her report card

       According to the instruction :-
       0  -  39 ---- fail
       39 -  59 ---- satosfactory
       59 -  79 ---- good 
       79 -  89 ---- nice
       89 - 100 ---- excellent */ 


#include<stdio.h>
void main()
{
     char sec[50],name[500];
     int mar;
     printf ("Enetr the name of Student :- ");
     gets (name);
     printf ("Enter the section of student :- ");
     scanf ("%c",&sec[50]);
     printf ("Enter the marks of the student :- ");
     scanf ("%d",&mar);
     printf ("\n");
     printf (":::::::::RESULT:::::::");
     printf ("\n");
        if (mar >=89 && mar <=100)
        {
            printf ("Congratulation\n");
            printf (" excellent result\n");
        }
        else if (mar >=79 && mar <= 89)
        {
            printf ("Congratulation\n");
            printf (" nice result \n");
        }
        else if (mar >= 59 && mar <=79)
        {
            printf (" Good Result \n");
        }
        else if (mar >=39 && mar <=59)
        {
            printf ("satesfactory \n");
        }
        else
        {
            printf ("Failed !\n");
        }
     
     printf ("Name of the student :- %s\n",name);
     if (sec[50]>=65 && sec[50]<= 91)
     {
     printf ("Section :- %c\n",sec[50]);
     }
     else 
     {
         printf ("Section :- %c\n",sec[50]-32);

     }
     printf ("His/Her marks is :- %d\n\t\n",mar);
     if (mar >=89 && mar <=100)
        {
            printf ("Remarks :\n");
            printf (" He is a Very hard working boy.He had set an example of very nice and hard working and good student .\t\n\t");
        }
        else if (mar >=79 && mar <= 89)
        {
            printf ("Remarks :\n");
            printf (" He tries to cooperate with his class. in his upcoming days he will improve himself as a best student.\n\t");
        }
        else if (mar >= 59 && mar <=79)
        {
            printf ("Remarks :\n");
            printf (" He is a improving student .He tries to study but fails ,no worry he will improve himself/herself in his upcoming days. \n\t");
        }
        else if (mar >=39 && mar <=59)
        {
            printf ("Remarks :\n");
            printf ("Try hard to improve !!!\n");

        }
        else
        {
            printf ("Remarks :\n");
            printf ("Have to give exam again !\n");
        }
}