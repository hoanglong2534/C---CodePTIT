#include<stdio.h>
#include<limits.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int max1 = INT_MIN, max2 = INT_MIN;
	for(int i = 0;i<n;i++){
		if(a[i]>max1) max1 = a[i];
	}
	
	for(int i=0;i<n;i++){
		if(a[i]==max1) continue;
		else{
			if(a[i]>max2) max2 = a[i];
		}
	}
	printf("%d %d", max1, max2);
	return 0;
}