#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter consonant: ");
    scanf("%[^aeiouAEIOU\n]",&ch); 
    printf("\nThe character entered in %c",ch);
}
