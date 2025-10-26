#include<stdio.h>
#include<math.h>
#define ll long long
ll check2(ll n){
	ll s=0, m=n;
	while(n){
		s=s*10+n%10;
		n/=10;
	}
	if(s==m) return 1;
	 else return 0;
}
ll check1(ll n){
	ll m=n, y;
	int x, c=0;
	x=n%10;
	while(n){
		c++;
		y=n%10;
		n/=10;
	}
	n=(m-(y*(ll)pow(10,c-1))-x) / 10;
	if(check2(n)){
		if(y==2*x||x==2*y)
		return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(check1(n)) printf("YES\n");
		else printf("NO\n");
	}
}