#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);

	int k;
	for(k=0;k<t;k++){
		printf("\n");
		int count;
		int a,b;
		scanf("%d %d",&a,&b);
		int arr[a];
		int brr[b];
		int i;
		for(i=0;i<a;i++)
		{	
			scanf("%d",&arr[i]);
	
		}
		int j;
		int max1=arr[0];
		for(i=0;i<a;i++){
			if(arr[i]>max1){
				max1=arr[i];
				}
			}
	
		for(i=0;i<b;i++)
		{
			scanf("%d",&brr[i]);
		}
		count=0;
		int max2=brr[0];
		for(i=0;i<b;i++){
			if(brr[i]>max1){
				max2=brr[i];
				}
			}

		if(max1>=max2){
			printf("Godzilla");
		}
		else {
			printf("MechaGodzilla");
		}
	
	}
	return 0;
}
