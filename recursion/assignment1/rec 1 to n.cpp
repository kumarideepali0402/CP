#include<stdio.h>
void num(int n,int x){
	if(x<n) return ;
	printf("%d",n);
	n=n+1;
	num(n,x);
}
int main(){
	int n,x;

	printf("enter ending number:");
	scanf("%d",&x);
	num(1,x);
	return 0;
}