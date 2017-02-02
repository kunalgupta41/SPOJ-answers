#include<stdio.h>
#include<stdlib.h>
int  cdf(int n);
int main(){
	
	long long int n;
	scanf("%lld",&n);
	long long int ans;
	ans=cdf(n);
	printf("%lld\n",ans);



return 0;
}

int cdf(int d){
	if(d%2==1||d==0){
	return 0;
	}
	else if(d==1){
	return 1;
	}
	else if(d==2){
	return 2;
	}
	else{
	return(2+cdf(d/2));
	}
}
