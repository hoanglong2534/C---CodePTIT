#include <stdio.h>
void selectionSort(int a[], int n){
	int t=1;
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(i>0){
			printf("Buoc %d: ", t);
			t++;
			for(int i=0;i<n;i++){
				printf("%d ", a[i]);
			}
			printf("\n");
		}
		int tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
		if(i==n-2){
			printf("Buoc %d: ", t);
			t++;
			for(int i=0;i<n;i++){
				printf("%d ", a[i]);
			}
			printf("\n");
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	selectionSort(a,n);
 }

