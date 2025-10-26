#include<stdio.h>
#include<math.h>
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	int t;
	scanf("%d", &t);
	fibo();
	while(t--){
		int n;
		scanf("%d", &n);
		long long x;
		x=f[n];
		printf("%lld\n", x);
	}
}