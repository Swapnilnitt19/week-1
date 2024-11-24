#include<stdio.h>
int main(){
	int i;
	printf("enter value in km");
	scanf("%d",&i);
	printf("value in meter,cm,mm is %d,%d,%d",(i*1000),(i*100000),(i*1000000));
	return 0;
}

