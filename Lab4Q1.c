#include<stdio.h>
int main()
{
    int i,j,row,fi,fj;
    printf("ENTER AN INTEGER : ");
    scanf("%d",&row);
    printf("OUTPUT : \n");
    {
        for(i=row;i>=1;i--)
        {
           for(j=1;j<=i;j++)
           {
               printf("*");
           }
        printf("\n");
        }
    }
    for(fi=2;fi<=row;fi++)
    {
        for(fj=1;fj<=fi;fj++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}