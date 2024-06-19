#include<stdio.h>

int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	
	}
	return res;
}

int strong(int n){
	int tong=0,m=n;
	while(n!=0){
		tong+=gt(n%10);
		n/=10;
	}
	if(tong==m){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",strong(n));
	return 0;
}