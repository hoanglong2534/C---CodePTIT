#include<stdio.h>
#include<math.h>


int b[1000001];

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1;i<=t;i++){
 		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		 for(int i =0;i<n;i++){
		 	b[a[i]]++;	
		 }
		printf("Test %d:\n", i);
		for(int i = 0;i<n;i++){
			if(b[a[i]]!=0){
			 printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
			 b[a[i]]=0;
		} 
	}
}
	return 0;
}