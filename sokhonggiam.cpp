#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, a, x, y;
		scanf("%lld", &n);
		while(n){
			a=n%10;
			x=a;
			n/=10;
			y=n%10;
		if(x<y){
			printf("NO\n");
			break;
		}
		}
		if(x>=y){
			printf("YES\n");
		}
	}
}