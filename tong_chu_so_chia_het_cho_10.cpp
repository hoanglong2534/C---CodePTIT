#include<stdio.h>

/*int tong(int n){
	while(n!=0){
		int sum=0;
		while(n>0){
			sum = sum + n%10;
			n/=10;
		}
		return sum;
	}
//	return sum;
}
*/
int solve(int n){
	int sum = 0;
	while (n){
		sum += n%10;
		n /= 10;
	}
	if (sum % 10 == 0) return 1;
	else return 0;
}


int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
//		int c = solve(n);
		if (solve(n)) printf("\n YES");
		else printf("\n NO");
	}

	return 0;
}