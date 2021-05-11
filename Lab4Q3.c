#include <stdio.h>
int main()
{
    int bal, amt;
    char ch;
    printf("Enter Balance:");
    scanf("%d", &bal);
    printf("The options are :- A,S,E\n");

    while (1)
    {
        printf("Enter option :");
        scanf(" %c", &ch);
        if (ch == 'A')
        {
            scanf(" %d", &amt);
            bal = bal + amt;
            printf("Balance :%d\n", bal);
        }
        else if (ch == 'S')
        {
            scanf(" %d", &amt);
            bal = bal - amt;
            printf("Balance :%d\n", bal);
        }
        else if (ch == 'E')
        {
            printf("Exiting...");
            break;
        }
    }
}