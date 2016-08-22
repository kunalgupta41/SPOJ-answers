#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		long long int n;

		scanf("%lld",&n);
		long long int j;
		long long int arr;
		long long int sum=0;
		for(j=0;j<n;j++){
			scanf("%lld",&arr);
			sum=(sum+arr)%n;
			}

		if(sum==0){
		printf("YES\n");
		}		
		else{
		printf("NO\n");
		}
	}	
return 0;
}
