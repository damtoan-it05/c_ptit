#include<stdio.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d %d", &n,&m);
	for(int i=1;i<=n;i++){
		int x=m;
		if(n>m)x=n;
		for(int j=1;j<=m;j++){
			if(i>j){
			printf("%c", (96+x--));
			}
			else{
				printf("%c", (96+x));
			}
		}
		printf("\n");
	}
}