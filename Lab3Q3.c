#include<stdio.h>
int main(void)
{
    int a,b;
    char op;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    printf("Enter operation : ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Output : %d\n",a+b);
        break;

        case '-':
        printf("Output : %d\n",a-b); 
        break;

        case '/':
        (b!=0)?(printf("Output : %d\n",a/b)): (printf("ERROR: Divide by zero\n"));
        break;

        case '*':
        printf("Output : %d\n",a*b);
        break;

        default:
        printf("Invalid operation\n");
    }
}