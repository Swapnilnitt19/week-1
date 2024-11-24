#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter the marks:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("percentage is %f % % ",(float)(a+b+c+d+e)/5);
	return 0;
}

