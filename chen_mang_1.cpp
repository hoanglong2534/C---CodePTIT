#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	int c;
	scanf("%d",&c);
	
	for(int i=0;i<c;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d ",b[i]);
	}
	for(int i=c;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}