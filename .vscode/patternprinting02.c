#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("Enter the number of rows:");
    scanf("%d",&n); 
    printf("Enter the number of columns:");
    scanf("%d",&k);
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=k;j++)
            {
                printf("*");
            }
                printf("\n");
        }
    }
            
        
        printf("\n");

    getch();
}