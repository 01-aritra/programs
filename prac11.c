#include<stdio.h>
#include<stdlib.h>

struct student
{
    int boo_no;
    char boo_na[100];
}typedef student;

int main()
{
    student s ={12,"Compute"};
    printf("%d %s",s.boo_no,s.boo_na);
    return 0;
}