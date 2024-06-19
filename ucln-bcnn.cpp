#include<stdio.h>

long long  ucln(long long  a, long long b){
	if(b==0) return a;
	return ucln(b,a%b);
}

long long bcnn(long long a, long long b){
	return a*b/ucln(a,b);
}
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%lld\n", ucln(a,b));
	printf("%lld", bcnn(a,b));
	return 0;
}