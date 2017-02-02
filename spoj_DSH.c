#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i;
	char code[27];
	while(scanf("%s",code)==1){
	int len,val;
	len=strlen(code);
	if(len<=3){
	return 0;
	}
	int count=0;
	for(i=0;code[i]!=0;i++){
		if('a'<=code[i]&&code[i]<='m'){
		printf("%d ",code[i]-81);
		 val=code[i]-81;
		}
		else if('n'<=code[i]&&code[i]<='t'){
		val=code[i]-90;
		printf("%d ",val);
		}
		else{
		val=code[i]-99;
		printf("%d ",val);
		}
		
		if(val>23){
			count++;
		}

	}
	if(count>0){
		printf("\n%d\n",count);
	}
	else{
		printf("\nno one.\n");
	}
}





return 0;
}
