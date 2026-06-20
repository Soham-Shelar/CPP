#include<stdio.h>
#include<stdio.h>
void main()
{
    int i,j,n,k=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            
            printf("%d",k);
           
        }
         k++;
        printf("\n");
    }
    getch();
}   