#include<stdio.h>

int main(){
	int h,c;
	scanf("%d %d",&h, &c);
	for (int i=1;i<=h;i++){
		for(int j=1;j<=i-1 ;j++){
			printf("~");
		}
		for(int j=1;j<=c;j++){
			if(i==1 || i==h || j==1||j==c ){
				printf("*");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}