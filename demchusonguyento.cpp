#include<stdio.h>
#include<math.h>
#define ll long long
ll doi(ll n){
	ll s=0;
	while(n){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
void dem(ll n){
	int x, c2=0, c3=0, c5=0, c7=0;
	ll m=n;
	while(n){
		x=n%10;
		if(x==2) c2++;
		else if(x==3) c3++;
		else if(x==5) c5++;
		else if(x==7) c7++;
		n/=10;
	}
	while(m){
		x=m%10;
		if(x==2&&c2>0) {printf("2 %d\n", c2); c2=0;}
		else if(x==3&&c3>0) {printf("3 %d\n", c3);c3=0;}
		else if(x==5&&c5>0) {printf("5 %d\n", c5);c5=0;}
		else if(x==7&&c7>0) {printf("7 %d\n", c7);c7=0;}
		m/=10;
	}
}
int main(){
	ll n, m;
	scanf("%lld", &n);
	m=doi(n);
	dem(m);
}