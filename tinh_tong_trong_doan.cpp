#include<stdio.h>
int main(){
	int a,b,S=0;
	scanf("%d %d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			S+=i;
		}
	}
	if(b<a){
		for(int i=b;i<=a;i++){
			S+=i;
		}
}
	printf("%d",S);
	return 0;
}