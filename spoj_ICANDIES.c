#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++){
	int flag=0;
	int n;
	
	scanf("%d",&n);
	n=n-5;
	while(n>0){
	
	if(n%3==0){
		printf("Case %d: %d\n",i,n);
		flag=1;
		break;
		}
	n=n-5;
	}
	if(flag==0){
		printf("Case %d: -1\n",i);	
	}
	}

return 0;
}
