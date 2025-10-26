#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int x=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<2*n;j+=2){
			if(j>=x){
				printf("%c", 64+j);
			}
		}
		x+=2;
		printf("\n");
	}
}