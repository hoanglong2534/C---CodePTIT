#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int sum=0, dem=0;
	for(int i =0;i<n;i++){
		sum+=a[i];
		dem++;
	}
	
	float tb = sum*1.0/dem ;
	printf("%.3f", tb);
	return 0;
}