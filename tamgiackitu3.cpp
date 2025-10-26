#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int x=i;
		for(int j=1;j<=i;j++){
			printf("%c ", x+64);
			x=x+t-j;
		}
		printf("\n");
	}
}