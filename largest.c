/* WAP to check the largest of three integers using ternary operator.*/



#include<stdio.h>
int main()
{
    int a,b,c,lar;
    printf("Enter three integers \n");
    scanf("%d %d %d",&a,&b,&c);
    lar=((a>b)&&(a>c))? (a):((b>c)?(b):(c));
    printf("largest of three integers is : %d",lar);
    return 0;

}