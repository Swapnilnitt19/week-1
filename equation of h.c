#include<stdio.h>
int main()
{
	int H,b,p;
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of p : ");
	scanf("%d",&p);
	H=sqrt(b*b+p*p);
	printf(" the value of h is%d",H);
	return 0;
}
