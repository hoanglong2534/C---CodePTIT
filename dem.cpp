#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
#include<string.h>
int nt(int n){
	for (int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int b[100001];
int main(){
	int t; scanf("%d", &t);
	for (int i = 1;i<=t;i++){
		int n;
		scanf("%d",&n);
		int x;
		int max = -1;
		for(int i =0;i<n;i++){
			scanf("%d",&x);
			if(nt(x))	b[x]++;
		 	if(x>max) max = x;
		} 
		
		printf("Test %d:\n", i );
		
		for(int i=0;i<=max;i++){
			if(b[i]!=0 ){
			printf("%d xuat hien %d lan\n",i, b[i]);	
			
		}
		
	}
	memset(b,0,sizeof(b));
	
	
	}
	return 0;
}