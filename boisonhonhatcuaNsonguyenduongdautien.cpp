#include<stdio.h>
#define ll long long
ll uoc(ll n, ll m){
	while(n!=0){
		ll x=n;
		n=m%n;
	    m=x;
	}
	return m;
}
ll boi(ll n,ll m){
	return (n*m)/uoc(n,m);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;ll s=1;
		scanf("%d", &n);
		for(int i=1;i<=n;i++){ 	
			s=(boi(s,i));
		}
		printf("%lld\n", s);
	}
}