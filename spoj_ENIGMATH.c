#include<stdio.h>
#include<stdlib.h>
long long int gcd(long long int,long long int);
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
	long long int a,b,g;
	scanf("%lld %lld",&a,&b);
	if(a>=b){
	g=gcd(a,b);
	}
	else{
	g=gcd(b,a);
	}
	
	
	long long int x,y;
	x=b/g;
	y=a/g;
	printf("%lld %lld\n",x,y);

	}	




return 0;
}
long long int gcd(long long int n1,long long int n2){
	if(n2!=0){
		return gcd(n2,n1%n2);
	}
	else{
	return n1;
}

}
