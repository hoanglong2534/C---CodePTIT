#include<stdio.h>
int main(){
	int n,t=1;
	scanf("%d",&n);
	while(n>=10){
		t=t*(n%10);
		n=n/10;
	}
	printf("%d",t);
	return 0;
}