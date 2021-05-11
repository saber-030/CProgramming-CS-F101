#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers");
    scanf("%d %d %d",&a,&b,&c);
    int max,min,sum,x;
    min=(a<b)?(a<c? a: c):(b<c? b:c);
    max=(a>b)?(a>c? a:c): (b>c? b :c);
    sum=a+b+c;
    x=sum-(max+min);
    printf("Integers in Increasing order : %d  %d  %d \n",min,x,max);
}