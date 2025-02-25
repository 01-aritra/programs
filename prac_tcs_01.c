// PYQ -> 1  
/*Input :

200 = value of V
540 = value of W

Output:

TW = 130 FW= 70*/

#include<stdio.h>
#include<stdlib.h>

void code(int V, int W) {
    int i,j;
    for ( i = 2; i < V; i++) 
    { //printf("%d ",i);
        for ( j = V - i; j >= 0 ; j--)  
        { //printf("%d ",j);
            if (((i+j) == V) &&(i * 2) + (j * 4) == W) // i = Two Wheelers J = 4 Wheeler
            {
                printf("%d %d ",i,j);
                break;
            }
        }
    }
}

int main() {
    int V = 200;
    int W = 540;

    code(V,W);return 0;
}