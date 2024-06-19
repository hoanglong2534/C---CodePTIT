#include<stdio.h>
#include<math.h>
int main(){
	int n,sum=1;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		{
			sum+=i;
		if(i != n/i) sum+=n/i;

		}
}
	if(sum==n) 
		printf("1");
	else 
		printf("0");	
	return 0;
}