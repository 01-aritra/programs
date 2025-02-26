#include<stdio.h>
#include<conio.h>
void delay(int a)
{
    int add,time,i;
    time = a*100000;
for (i=0;i<=time ;i++)
{
    add*=i;
    add++;
    add++;
}
}
 void main()
{
    int i;
    printf ("Enter number : \n");
    scanf ("%d",&i);
    for (int p=i;p!=0;p++)
    if (i%2==0)
    {
       printf ("0");
       delay(3);
    }
    else 
    {
        printf ("1");
        delay (3);
    }
    getch();
}