#include<stdio.h>
#include<math.h>
int main(){
	int arr[100],n,i,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){			
			if(arr[i]<arr[j]){
				c=arr[i];				
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	if(n>2){
		for(i=1;i<n;i++){
		    if(arr[0]>arr[i]){
		    	printf("%d %d",arr[0],arr[i]);
		    	break;
			}
		}
	}	
	return 0;
}