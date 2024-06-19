#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int tong(int n){
	
	int  x= n%10;
	int sum=0;
	
	while(n!=0){
		sum+=x;
		n/=10;
		x=n%10;
	}
	if(sum==1||sum==2||sum==3||sum==5||sum==8||sum==13||sum==21)
	return 1;
	else return 0;

}
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(int i=a;i<=b;i++){
		if(nt(i)){
			if(tong(i))
			printf("%d ", i);
		} 
	}
	return 0;
}