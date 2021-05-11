#include<stdio.h>
int main()

{
    int i,j=1,c=0,gcd;
    int a [100];
    printf("Enter Integers");
    for(i=0;i<100;i++)
    {
        scanf("%d", & a[i]);
        if(a[i]<=0)
            break;
        c++;
        
        
    }
    gcd=a[0];
    while(j<c)
    {
        if(a[j]%gcd==0)
            j++;
        else
        {
            gcd=a[j]%gcd;
            j++;
        }
    }
    printf("GCD : %d \n" , gcd);
    return 0;
}
        
    
    
    