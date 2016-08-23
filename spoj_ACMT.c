#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		int e,n;
		scanf("%d %d",&e,&n);
		int count=0;
		while(e>0&&n>0){
			if(e>n){
				e=e-2;
				n--;
				count++;
			}
			else if(n>e){
				n=n-2;
				e--;
				count++;
			}
			else if(n==e&&n!=1){
				n=n-2;
				e--;
				count++;
			}
			if(n<2&&e<2){
				break;
			}
		}
		printf("%d\n",count);

	}



return 0;
}
