#include<stdio.h>

int b[1000005];
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i] >max) max = a[i];
	}
	
	for(int i=0;i<n;i++){
		b[a[i]]++;

	}
	int dem=0;
	for (int i =0;i<=max;i++){
		if(b[i]>1) dem++;
		
		
	}
	printf("%d\n",dem);
	
	for(int i= 0;i<n;i++){
		if(b[a[i]]>=2){
	 printf("%d ", a[i]);
		b[a[i]]=0;
	}
	}
	return 0;
}
