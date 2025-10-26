#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int x=1;
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t-i;j++) printf("~");
		int n=2;
		for(int j=1;j<=x;j++){
			if(j<i){
				printf("%d", n);
			    n+=2;
			}
			else{
				printf("%d", n);
				n-=2;
			}
		}
		x+=2;
		printf("\n");
	}
}
