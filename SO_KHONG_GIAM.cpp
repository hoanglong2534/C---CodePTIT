#include<stdio.h>

int kogiam(long long n){
	int x = n%10;
	n/=10;
	while(n!=0){
	
	if(x < n%10) return 0;
	x = n%10;
	n/=10;
}
	return 1;
	
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(kogiam(n)) printf("YES");
		else printf("NO");
		printf("\n");
		
	}

	return 0;
}