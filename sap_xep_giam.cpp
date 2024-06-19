#include<stdio.h>

int sxgiam(int a[],int n){
	for(int i=0;i<n;i++){
		int max=i;
		for(int j=i+1;j<n;j++){
			if(a[j]> a[max]) max = j;
		}
		int tmp = a[i];
		a[i]= a[max];
		a[max]=tmp;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i =0 ;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	sxgiam(a,n);
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}