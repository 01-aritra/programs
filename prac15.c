#include<stdio.h>
int main()
{
    int n=5 , r =3;
    int sum = 1;
    for (int i = n;i >0 ;i -- )
    {
        sum = sum * i;
        // printf("%d %d\n",i ,sum);
    }
    int tum  =1;
     for (int l = r;l >0 ;l -- )
    {
        tum = tum * l;
        // printf("%d %d\n",l ,tum);
    }
    int k =n-r;
    int num = 1;
    for (int j = k;j >0 ;j -- )
    {
        num = num * j;
        //printf("%d %d\n",j ,num);
    }

    int finoutput = 0 ;
    finoutput = finoutput + ( sum / ( tum * num));
    printf("combination of %d choose to %d is : %d",n,r,finoutput);
    return 0;
}