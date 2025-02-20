#include<stdio.h>
// #include<string.h>

int main()
{
   // char ch[] = "string";
    // printf("%u \n",strlen(ch));
    // printf("%u",strlen(ch+2));
    // printf("%d",strlen(ch));




    // char * c=  "GATECSIT2017";
    // char*p = c;
    // printf("%d", (int)strlen(c+2[p]-6[p]-1));

     
     void fun1(char * s1, char * s2)
     {
        char *temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
     }
     void fun2(char **s1,char **s2)
     {
        char *temp;
        temp = *s1;
        *s1= *s2;
        *s2 = temp;
     }
     int main()
     {
        char *str1 ="Hi", *str2 = "Bye";
        fun1(str1,str2);
        printf("%s %s",str1,str2);
        fun
     }
    return 0;
}