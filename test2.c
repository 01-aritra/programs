#include<stdio.h>

int main()
{
    // int a = 330;
    // int b = 30;
    // int c = 30;

    // a = b != c;
    // printf("%d  ",a);
    // printf("%d  ",b);
    // printf("%d  ",c);


    int x;
  x=5;int y;
   // x = -14%8+2%-8;
   //x++;
  // y = ++x;;
  //  printf("%d %d",x,y);
   int b = 10;
int sum =0;
   y = x++;
   y = ++x;
   y = x++ *b;
   y = ++x *b;
   y = x--;
   y = --x;
   y = x-- *b;
   y = --x *b;
  printf("%d %d\n",x,y);
  sum = x + y;
  printf("%d",sum);
    return 0;
}