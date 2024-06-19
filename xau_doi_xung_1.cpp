#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


char doixung(char s[]){
	int l=0, r=strlen(s)-1;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}


int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[20];
		gets(s);
		if(doixung(s)) printf("YES");
		else printf("NO");
	}
	
	return 0;
}