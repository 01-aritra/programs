#include<stdio.h>
void tow(int n,int s,int a,int t)  
// n = no.of tower
// s = source of the disc
// a = auxaliary disc
// t = target disc
{
  if (n > 0) {
        // Move n-1 disks from source to auxiliary peg
        tow(n - 1, s, t, a);

        // Move the nth disk from source to target peg
        printf("Move disk %d from %d to %d\n", n, s, t);

        // Move the n-1 disks from auxiliary to target peg
        tow(n - 1, a, s, t);
    }
}
int main()
{
    int n,s,a,t;
    printf("Enter no of tower");
    scanf("%d",&n);
    printf("Enter source auxaliary and target respectively");
    scanf("%d %d %d",&s, &a , &t);
    printf("Tower of Hanoi with %d disks:\n", n);
    tow(n, s, a, t);

    return 0;
}
