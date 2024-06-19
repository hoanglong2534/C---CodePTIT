#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char S[1000];
	gets(S);
	int cnt1=0;
	int cnt2=0;
	for(int i=0;i<strlen(S);i++){
		if(isalpha(S[i])) cnt1++;
		else if(isdigit(S[i]))cnt2++;
	}
	printf("%d %d %d",cnt1,cnt2, strlen(S)-cnt1-cnt2 );
	return 0;
}