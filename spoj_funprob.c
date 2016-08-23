#include<stdio.h>
#include<stdlib.h>
int main(){
while(1){
	int n,m;
	float a;
	scanf("%d %d",&n,&m);
	if(n==0&&m==0){
		break;
	}
	if(n>m||m==0){
		a=0.0;
		printf("%f\n",a);
	}
	else if(n==0&&m!=0){
		a=1.0;
		printf("%f\n",a);
	}
	else if(m>n||(m==n&&m!=0&&n!=0)){
		a=(float)(m-n+1)/(m+1);
		printf("%f\n",a);
	}
}
return 0;
}
