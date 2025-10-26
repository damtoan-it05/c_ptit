#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int n=1;
	while(t--){
		
		for(int i=1;i<=n;i++){
			printf("%d", i);
		}
		n+=2;
		printf("\n");
	}
}