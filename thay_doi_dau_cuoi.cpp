#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int c;
	c=n%10;
	int m=n,dem=0,d;
	while(n>=10){
		n/=10;
		dem++;
	}
	d=n;
	int g;
	g=m-d*(int)pow(10,dem)-c	;
	int res= c*(int)pow(10,dem)+g+d;
	printf("%d", res);
	return 0;
}