#include<stdio.h>
#define ll long long
ll max(ll n){
	ll x=0, c=0, a[20];
	while(n){
		int k=n%10;
		if(k==5){
			a[c]=6;
		}
		else a[c]=k;
		c++;
		n/=10;
	}
	for(int i=c-1;i>=0;i--){
		x=x*10+a[i];
	}
	return x;
}
ll min(ll n){
	ll x=0, c=0, a[20];
	while(n){
		int k=n%10;
		if(k==6){
			a[c]=5;
		}
		else a[c]=k;
		c++;
		n/=10;
	}
	for(int i=c-1;i>=0;i--){
		x=x*10+a[i];
	}
	return x;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
	    ll n, m;
		scanf("%lld%lld", &n, &m);
		printf("%lld %lld\n", min(n)+min(m), max(n)+max(m));
	}
}