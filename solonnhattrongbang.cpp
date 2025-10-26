#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int d=1e9,r=1e9;
	for(int i=0;i<n;i++){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a<r){
			r=a;
		}
		if(b<d){
			d=b;
		}
	}
	printf("%lld", (long long)r*d);
}