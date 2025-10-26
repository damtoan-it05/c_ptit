#include<stdio.h>
#include<math.h>
int fb[30];
void fibo(int n){
	fb[0]=0;
	fb[1]=1;
	printf("%d %d ", fb[0], fb[1]);
	for(int i=2;i<30;i++){
		fb[i]=fb[i-1]+fb[i-2];
		if(i<=n-1){
			printf("%d ", fb[i]);
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	fibo(n);
}