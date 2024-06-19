#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void cat_doi(char c[]){
	for(int i=0;i< strlen(c); i++){
		if(c[i]=='0'|| c[i]=='1'|| c[i]=='8'||c[i]=='9'){
			if(c[i] == '8'|| c[i]=='9') c[i]='0';
		}
		else {
		printf("INVALID\n"); return;
	}
}
	int p=0; 
	while(p<strlen(c) && c[p]=='0') p++;
	if(p==strlen(c)) printf("INVALID\n");
	else{
		for(int i =p;i< strlen(c);i++){
			printf("%c",c[i]);
		}
		printf("\n");
	}
}

int main(){
	int t; 
	scanf("%d",&t);
	while(t--){
		char c[100];
		scanf("%s",c);
		cat_doi(c);
		 
	}
	
	return 0;
}