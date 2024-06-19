#include<stdio.h>

void fibo(int n){
	long long F[100];
	F[1]=1;F[2]=1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
		if(F[i]==n){
			 printf("1"); 
			 return;
		}
		else if (F[i]> n){
			printf("0");
			return;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	fibo(n);

	return 0;
}