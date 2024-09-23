#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length");
    scanf("%d",&n);
    int nsp=3;
    int a=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        nsp--;
        int b=65;
        for(int k=1;k<=a;k++)
        {
            char ch=(char)b;
            printf("%c",ch);
            b++;

        }
        a=a+2;
        printf("\n");

    }

    return 0;
}