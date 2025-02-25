#include<stdio.h>
#include<stdlib.h>

//  enter student detain using structure

// student roll , student name , student marks in 5 subject 

// print the details

struct student 
{
    int sroll;
    char sname[50];
    int marks[5];

};


int main()
{
    struct student s;
      
    int total =0 ; float avg_mar = 0.0;   
    printf("Enter student roll: ");
    scanf("%d",&s.sroll);

    printf("Enter Student Name : ");
    scanf("%s",&s.sname);

    printf("Enter srudent marks :");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);       
        total = total +s.marks[i] ;
        avg_mar = (float)total/5;
    }
    
    printf("The required answers are: ");
    printf("%d ",s.sroll);
    printf("%s  ",s.sname);
    printf("%d  ",total);
    printf("%2f  ",avg_mar);

    return 0; 
}
