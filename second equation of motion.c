#include<stdio.h>
int main(){
	int s,u,t,a;
	printf("enter u :");
	scanf("%d",&u);
	printf("enter t :");
	scanf("%d",&t);
	printf("enter a :");
	scanf("%d",&a);
	s=u*t+1/2*a*t*t;
	printf("value of s is %d",s);
	return 0;
}
