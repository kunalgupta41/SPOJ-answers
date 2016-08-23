#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(){
while(1){

	int n;
	scanf("%d",&n);
	if(n==0){
	break;
	}
	long long int arr[n];
	long long int brr[n];
	long long int i;
	for(i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		scanf("%lld",&brr[i]);
	}

sort(arr,arr+n);
sort(brr,brr+n);
	

	long long int sum=0;
	for(i=0;i<n;i++){
	sum=sum+arr[i]*brr[n-i-1];	
	}
	printf("%lld\n",sum);
}
return 0;
}
