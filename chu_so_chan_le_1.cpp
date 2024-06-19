#include<stdio.h>
int main(){
	int n; 
	scanf("%d",&n);
	int dem1 = 0,dem2 = 0;
	while(n>0){
		if(n%2==0){
			dem2+=1;
		}
		else{
			dem1+=1;
		}
	n/=10; 
	}
	printf("%d %d",dem1, dem2);
	return 0;
}