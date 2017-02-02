#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
	
	long long int n; 
	scanf("%lld",&n);
	long long int k;
	k=10*(19+25*(n-1))+2;
	printf("%lld\n",k);


}

return 0;
}
