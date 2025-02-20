#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,s,sum0=0;
    float d,f,sum1=0.0;
    printf ("Enter two intrger numbers :\n");
    scanf ("%d %d",&a,&s);
    printf ("Enter two float numbers  :\n");
    scanf ("%f %f",&d,&f);
    sum0=a+s;
    sum1=d+f;
	printf ("sum of two int number %d and %d is %d\n",a,s,sum0);
   printf("Sum of two float number %f and %f is %f\n",d,f,sum1);
    
    return 0;
}