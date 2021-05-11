#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter 4 digit number: ");
    scanf("%d",&num);

    printf("%4d\n",num ); 
    printf("%4d\n",num%1000); 
    printf("%4d\n",num%100);
    printf("%4d\n",num%10);
    return 0;
} 
