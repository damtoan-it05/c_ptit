#include<stdio.h>
#include<math.h>
int gt(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x*=i;
	}
	return x;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n;i++){
		for(int j=1; j<=i; j++){
			printf("%d ", gt(i)/((gt(i-j))*gt(j)));
		}
		printf("\n");
	}
}