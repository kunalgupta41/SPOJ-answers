#include<stdio.h>

int main(){
	int p;
	scanf("%d",&p);
	int i;
	for(i=0;i<p;i++){
		long long int n,k,m;
		double mo;
		scanf("%lld %lld %lld",&n,&k,&m);
		long long int count=0;

		mo=n;



	while(mo<=m){
		count++;
		mo=mo*k;
		}

	if(count>0){
		printf("%lld\n",count-1);
		}
	else{
		printf("0\n");
		}
	}
return 0;
}
