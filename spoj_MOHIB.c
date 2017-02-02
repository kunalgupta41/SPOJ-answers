#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		int x,avg;
		scanf("%d %d",&x,&avg);
		int n;
		n=avg-x+1;
		int j,sum=0;
		sum=(n-1)*(n)/2;
		int sum1;
		sum1=n*avg;
		int ans;
		ans=sum1-sum;
		printf("%d\n",ans);
	



	}





return 0;
}
