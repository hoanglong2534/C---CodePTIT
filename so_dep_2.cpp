#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int tn(char c[]){
	int l=0, r=strlen(c)-1;
	while(l<r){
		if(c[l] != c[r]) return 0;
		l++;
		r--;
	}
	return 1;	
}

int check1(char c[]){
	if(c[0] =='8' && c[strlen(c)-1]=='8')
	return 1;
	return 0;		
}

int check2(char c[]){
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		sum=sum + c[i]-'0';
	}

	if(sum%10==0) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[500];
		scanf("%s", c);
		if(tn(c) && check1(c) && check2 (c)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}