#include<stdio.h>

int nb(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++ ){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		
		
		}
			printf("Buoc %d: ", i+1);
				for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	nb(a,n);
}