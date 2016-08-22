#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,h;
		int count=0;
		scanf("%d %d",&h,&a);

		while(a!=0||h!=0){
			a=a+2;
			h=h+3;
			count++;

			if((h<=5) || (h>5 && h<=20 && a<=10)) {
                		h=0;
                		a=0;
                		break;
            		}

			if(h>5&&a>10){
				h=h-5;
				a=a-10;
				count++;

			}
			else if(h>20){
				h=h-20;
				a=a+5;
				count++;


			}



		}
		printf("%d\n",count);
	}
return 0;
}

