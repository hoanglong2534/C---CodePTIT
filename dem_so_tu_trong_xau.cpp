#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[200];
		gets(c);
			int dem=1;
		for(int i=0;i<strlen(c)-1;i++){
			if(c[i] ==' '&& c[i+1] != ' ') dem+=1;	
		}
		printf("%d\n",dem);
	}
	
	return 0;
}