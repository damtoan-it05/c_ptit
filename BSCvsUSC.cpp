#include<stdio.h>
#include<math.h>
int t(int i, int j){
	int x;
	while(i*j!=0){
		if(i>j) i=i%j;
		else j=j%i;
		x=i+j;
	}
	return x;
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%lld %d", ((long long)a*b)/t(a,b), t(a,b));
		printf("\n");
	}
}