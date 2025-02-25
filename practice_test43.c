 #include<stdio.h>
 void main()
 {
    int n,i,j,k;
    printf("Enter the size of matrix");
    scanf("%d",&n);
    {
    int i,j;
    for (i=n;i>=1;i--)
    {
        for (j=n;j>=i;j--)
        {
             for(k=j;k<=n;k++)
                {
                    printf ("%d",k); 
                }       
               printf (" ");   
        }
        printf ("\n"); 
        
    }
}
 }