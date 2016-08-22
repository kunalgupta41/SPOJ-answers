#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int k=0;
	int brr[10005];
	while(1){
		scanf("%d",&n);
		if(n==-1){
			return 0;
		}
	int count=0;
	int arr[10005];
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		}
	int s;
	s=sum%n;
	if(s==0){
		int q;
		q=sum/n;
	for(i=0;i<n;i++){
		if(arr[i]<q){
			count=count+(q-arr[i]);
			}
		}
	printf("%d\n",count);
	brr[k++]=count;
		}
	else{
		printf("%d\n",-1);

		}
	}
return 0;
}
