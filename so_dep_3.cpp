#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int tn(char c[]){
	int l=0;
	int r=strlen(c)-1 ;
	while(l<r){
		if(c[l] != c[r]) return 0;
		l++;
		r--;
	}
	return 1;
	
}

int nt(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i] != '2' && c[i] != '3'&& c[i]!='5' && c[i]!='7'){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[500];
		scanf("%s", c);
		if(tn(c) && nt(c)){
			printf("YES\n");
		}
			else printf("NO\n");
			
			
				
	}
	return 0;
	
}