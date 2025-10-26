#include<stdio.h>
#include<math.h>
int main(){
	int n ,m;
	scanf("%d %d", &n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>=m-i+1){
				printf("%c", 64+j);
			}
		}
		
	
		printf("\n");
	}
}