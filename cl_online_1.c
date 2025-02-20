//Page fault  FIFO

#include<stdio.h>

int main()
{
    int incomingStream[] = {4,1,2,4,5};
    int pageFault = 0;
    int frames = 3;
    int m,n,s,pages;
    pages = sizeof(incomingStream)/sizeof(incomingStream[0]);
    int temp[frames];
    for (m = 0;m< frames ; m++)
    {
        temp[m] = -1;
    }
    for (m=0;m < pages;m++)
    {
        s=0;
        for (n=0;n < frames ;n++)
        {
            if (incomingStream[m] == temp[n])
            {
                s++;
                pageFault--;
            }
        }
        pageFault++;
        if ((pageFault <= frames) && (s == 0))
        {
            temp [m] = incomingStream[m];
        }
        else if (s== 0)
        {
            temp[(pageFault - 1) % frames] = incomingStream[m];
        }
        printf("\n");
        printf("%d \t\t\t", incomingStream[m]);
        for (n = 0;n< frames;n++)
        {
            if (temp[n] != -1)
            {
                printf(" %d \t\t\t",temp[n]);
            }
            else
            {
                printf(" -  \t\t\t");
            }
        }
    }
    printf("\n Total Page faults : \t%d\n",pageFault);
    return 0;
}