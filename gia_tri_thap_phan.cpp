#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		long long N;
		scanf("%lld",&N);
		printf("%.15lf \n",1*1.0/N);
	}
	return 0;
}