#include<stdio.h>

int tn(int n){
	int m=0;
	int k=n;
	while(n>0){
		m=m*10 + n%10;
		n/=10;
	}
	if(k==m) return 1;
	return 0;
}

int check(int n){
	int c = n%10;
	while(n!=0){
		n/=10;
	}
	int d = n;
	if(d*2==c || d== 2*c) return 1;
	return 0;
}

int check2(int n){
	for(int i=1;i<n;i++){
		if(tn(i)) return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n) && check2(n)){
			printf("YES");
		}
		else printf("NO");
		printf("\n");
		
		
	}
	return 0;
}