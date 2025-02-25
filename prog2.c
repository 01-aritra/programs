/*Design a C program to calculate the average marks of students in a class. The program
 should prompt the user to input the number of students, their names, and their marks for
  three subjects. Then, it should calculate and display the average marks for each student 
  along with their names.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stdnt
{
    char sname[25];
    int marks[3];
};

int main()
{
    struct stdnt s;
    int n;
    int tot =0,avg =0;
    printf("Enter no. of student : ");
    scanf("%d",&n);

    for (int i=0 ; i<n;i++)
    {
        printf("Enter Studet's Name : ");
        scanf("%s",&s.sname);

        printf("Enter the marks of three subjects : ");
        for (int j=0;j<3;j++)
        {
            scanf("%d",&s.marks[j]);
            tot = tot + s.marks[j];
        }
        avg =tot / 3;

        printf("Name : %s ",s.sname);
        printf("Avg Marks : %d \n",avg);
    }
    return 0;
}