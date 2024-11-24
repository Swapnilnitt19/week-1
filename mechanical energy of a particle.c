#include<stdio.h>
int main()
{
	int E,m,g,h,v;
	printf("enter the value of m : ");
	scanf("%d",&m);
	printf("enter the value of g : ");
	scanf("%d",&g);
	printf("enter the value of h : ");
	scanf("%d",&h);
	printf("enter the value of v : ");
	scanf("%d",&v);
	E=m*g*h+1/2*m*v*v;
	printf("value of E  is %d",E);
	return 0;
}
