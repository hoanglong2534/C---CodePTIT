#include <stdio.h>
int main(){
long long  a,b ;
	scanf("%lld %lld", &a, &b);
	if (b!=0)
	printf("%lld %lld %lld %.2lf %lld",a+b,a-b,a*b,a*1.0/b, a%b);
	else
	printf("0");
	return 0;
}