#include<stdio.h>

int uu_the_chan(long long n){
	if(n%2==1) return 0;

		int x = n%10;
	int dem1=0, dem2=0;
	while(n!=0){
		n/=10;
		x=n%10;
		if(x%2==0) {
		dem1++;
	}
		else {
		dem2++; 
		}
	
		}

		if(dem1 > dem2) return 1;
		else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(uu_the_chan(n))	printf("YES");
		else printf("NO");
		printf("\n");
	}
	
	return 0;
}