#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void sxtang(int a[], int n){
	for(int i =0;i<n;i++){
		int min=i;
		for(int j=i+1; j<n;j++){
			if(a[j]<a[min]) min = j; 
		}
		int tmp = a[i];
		a[i]=a[min];
		a[min] = tmp;
	}	
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sxtang(a,n);
	for(int i = 0;i<n;i++){
		printf("%d ", a[i]);
	}	
	return 0;
}