#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)  // No of lines / rows --> i
    {  
        for(int j=1;j<=i;j++) {   // ---> no of stars---> j
        printf("*");   
        }

    
    printf("\n");
    }
    return 0;
}
