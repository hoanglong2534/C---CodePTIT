#include<stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	c=n%10;
	while(n>=10){
		n/=10;
	}
	printf("%d %d",n,c);
	return 0;
}
	
