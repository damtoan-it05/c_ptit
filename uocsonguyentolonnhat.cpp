#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n,x;
		scanf("%lld", &n);
		for(int i=2;i<=sqrt(n);i++){
		    if(n%i==0){
		    	x=i;
		    	while(n%i==0) n/=i;
			}
		}
		if(n>1) x=n;
		printf("%lld\n", x);
	}
}