#include<stdio.h>

int check1(long long n){
	if(n%2==1) return 0;
			else{
				int x = n%10;
				while(n != 0){
					if(x%2==1) return 0;
					else{
						n/=10;
						x=n%10;
						if(x%2==0) return 1;
						else return 0;
					}
						
				}
				
			}	
}


int check2(long long n){
	while(n!=0){
		if(n%2==1) return 0;
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
		if(check2(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}