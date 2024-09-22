#include <stdio.h>
int main ()
{
    int n,m;
    printf("Enter the number of rows=");
    scanf("%d",&n);
     printf("Enter the number of columns=");

    for(int i=1;i<=n;i++) //--> Controls no of lines (rows) 
    {
        for(int i=1;i<=m;i++) 
        { 
            printf("*");  
        }

        printf("\n");
        
    
    }
    return 0;
}
