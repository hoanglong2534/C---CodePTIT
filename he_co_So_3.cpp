#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void check(char c[18]){
	int ok=1;
	for(int i = 0;i<strlen(c); i++){
		if(c[i] != '0' && c[i] != '1' && c[i] != '2'){
			ok = 0; break;
		}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[18];
		scanf("%s", c);
		check(c);
	}
	return 0;
}