#include<stdio.h>
#include<math.h>
int main(){
	int n ,m;
	scanf("%d %d", &n,&m);
	for(int i=n;i>=1;i--){
		int x=i;
		if(i>m){
			x=m;
		}
		for(int j=1;j<=m;j++){
			if(j<=m-i){
				printf("%c", 64+x++);
			}
			else{
			printf("%c", 64+x);
			}
		}
		printf("\n");
	}
}