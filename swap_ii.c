/* WAP in C to enter two numbers as an input and swap each others value
WITHOUT using the third variable  :

                                For eg-- INPUT : A=1 B=2 
                                         OUTPUT: A=2 B=1*/

#include <stdio.h>
int main()
{
    int a=10, b=20;
    printf (" Before swap a=%d b=%d ",a,b );
    a=a+b;            // a=30 (10+20)
    b=a-b;            // b=10 (30-20)
    a=a-b;             // a=20 (30-10)
    printf ("\n After swap a=%d b=%d :",a,b);
    return 0;
}
