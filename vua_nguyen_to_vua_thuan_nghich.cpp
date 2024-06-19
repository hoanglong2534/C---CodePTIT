#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int tn(int n){
	int m=0;
	int k=n;
	while(n!=0){
		m = m*10 + n%10;
		n/=10;
	}
	if(m==k) return 1;
	 return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int dem=0;
		for(int i=a;i<=b;i++){
			if(nt(i) && tn(i)){
				dem++;
				printf("%d ",i);
				
				if(dem%10==0) printf("\n");
				
			}
		}
		printf("\n");
}
	return 0;
}