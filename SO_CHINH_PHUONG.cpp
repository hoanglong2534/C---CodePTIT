#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long N;
	scanf("%lld",&N);
	int x = sqrt(N);
	if (x*x==N)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;
}