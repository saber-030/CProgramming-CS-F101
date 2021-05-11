#include <stdio.h>

int main() {
    int n, m;
    printf("Enter size of A: ");
    scanf("%d", &n);
    printf("Enter A: ");

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter size of B: ");
    scanf("%d", &m);
    printf("Enter B: ");

    int b[m];
    for(int i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }

    int flag = 0;

    for(int i=0;i<n;i++) {
        int temp = a[i];
        int countA = 0;
        int countB = 0;

        for(int j=0;j<n;j++) {
            if(a[j] == temp)
                countA++;
        }
        for(int j=0;j<m;j++) {
            if(b[j] == temp)
                countB++;
        }
        if(countB < countA) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("\nYES");
    }else {
        printf("\nNO");
    }
    return 0;
}