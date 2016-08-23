#include<stdio.h>
#include<stdlib.h>
int main(){
	while(1){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==0&&b==0&&c==0){
	break;
	}
	
	if(b-a==c-b){
		int d=b-a;
		printf("AP %d\n",c+d);
		}
	else{
		printf("GP %d\n",c*(c/b));
	}
	}
return 0;
}
