#include<stdio.h>
#include<math.h>
long long t(long long n){
	long long m=n, s=0, t=0, x;
	while(n){
		s=s*10+n%10;
		t=t+n%10;
		x=n%10;
		n/=10;
		if (x%2==0) return 0;
	}
	if(t%2!=0 && s==m) return 1;
	return 0;
}
int main(){
	int n;so
	scanf("%d", &n);
	while(n--){
		long long a;
		scanf("%lld", &a);
		if(t(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}