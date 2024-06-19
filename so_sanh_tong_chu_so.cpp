#include<stdio.h>

void  check(int a, int b){
	int tong1=0;
	int tong2=0;
	for(int i=0;i<=a;i++){
		tong1+=i;
	}
	
	for(int j=0;j<=b;j++){
		tong2+=j;
	}
	
	if(tong1 > tong2) printf("%d %d", a,b);
	else printf("%d %d", b,a);
}
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	check(a,b);
	return 0;
}