#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int x=n;
	for(int i=n;i>=1;i--){
		for(int j=x;j<2*x;j++){
			printf("%c", 63+j);
		}
		x--;
		printf("\n");
	}
}