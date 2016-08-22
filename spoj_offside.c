#include<stdio.h>
#include<stdlib.h>
int main(){
	while(1){
		int a,d;
		scanf("%d %d",&a,&d);
		if(a==0&&d==0){
			return 0;
		}
	int count=0;
	int arr[10010];
	int drr[10010];
	int i;
	int j;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<d;i++){
	scanf("%d",&drr[i]);
	}
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if(arr[j+1]<arr[j]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(i=0;i<d-1;i++){
		for(j=0;j<d-i-1;j++){
			if(drr[j+1]<drr[j]){
				int temp;
				temp=drr[j];
				drr[j]=drr[j+1];
				drr[j+1]=temp;
			}
		}
	}



	if(arr[0]>=drr[1]){
		printf("%c\n",'N');
	}
	else{
		printf("%c\n",'Y');
	}
}

return 0;
}
