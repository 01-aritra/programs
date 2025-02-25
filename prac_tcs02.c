//Coins 

/*Here Given 
            1 rupee coin , 2 rupee coin and 5 rupee coin
            
            add them up to get the required value 
            
            Display the number of coins required*/


#include<stdio.h>
#include<stdlib.h>

void findNoCoin(int VAL) {
    int i,j,k;
    int found = 0;
    int count_i = 0,count_j = 0,count_k = 0;
    for (i = 1; i <= VAL; i++)
    {
        count_i++;
        for (j = 2; j <= VAL; j+=2)
        {
            count_j++;
            for (k = 5; k <= VAL; k= k + 5)
            {
                count_k++;
                if ((i + j + k) == VAL)
                {
                    // printf("%d %d %d",i,j,k);
                    found = 1;
                    return;
                }
            }
        }   
    }    
    printf("No. of ! rupee coin : %d", count_i);
    printf("No. of ! rupee coin : %d", count_j);
    printf("No. of ! rupee coin : %d", count_k);
    //printf("%d %d %d",i,j,k);
    if (!found) {
        printf("No valid combination found for %d\n", VAL);
    }
}

int main() {
    int val = 13;

    findNoCoin(val);
    return 0;
}