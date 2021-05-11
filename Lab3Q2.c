#include<stdio.h>
int main(void)
{
	int a,b,c,d;
	printf("Please enter four integers\n");
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	printf("The maximum is ");
	int max=a;
	if (max<b)
		max=b;
	if (max<c)
		max=c;
	if (max<d)
		max=d;
	printf("%d\n",max);
	return 0;

}