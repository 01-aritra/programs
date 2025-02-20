#include<stdio.h>
void sum()
{
  int n1,n2,sum1;
  printf ("Enter number_1 and numbwer_2 \n");
  scanf ("%d %d",&n1,&n2);
    sum1 =n1+n2;
     printf ("Result is : %d \n",sum1 );
  }
  void sub()
  {
    int n1,n2,subt;
    printf ("Enter number_1 and number_2 for subtraction :\n");
    scanf ("%d %d",&n1,&n2);
    if (n1>n2)
    {
        subt = n1-n2;
        printf ("Result is : %d \n",subt);
    }
    else if (n2>n1)
    {
        subt = n2-n1;
        printf ("Result is : %d \n",subt);
    }
    else 
    {
        subt =0;
         printf ("Result is : %d \n",subt);
    }
  }
    void main()
    {
        sum();
        sub();
        printf ("recheck\n");
        sum();
        sub();
    }
  

