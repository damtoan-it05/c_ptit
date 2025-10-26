#include<stdio.h>
#include<math.h>
#define ll long long
ll so(ll n){
	int c=0,l=0;
	if(n%2==0){
		while(n){
			int x;
			x=n%10;
			if(x%2==0) c++;
			else l++;
			n/=10;
		
	      
	    }
    }
    if(c>l) return 1;
    
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(so(n)) printf("YES\n");
		else printf("NO\n");
	}
}