#include<stdio.h>

int ucln(int a, int b){
	if(b==0) return a;
	return ucln(b, a%b);
}

long long bcnn(long long a, long long b){
	return a*b/ucln(a,b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d %d", &a,&b);
		printf("%lld %d", bcnn(a,b), ucln(a,b));
		printf("\n");
	}
	return 0;
}