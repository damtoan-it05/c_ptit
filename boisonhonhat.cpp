#include<stdio.h>
long long uoc(long long a, long long b){
	while(a!=0){
		long long tmp = a;
		a=b%a;
		b=tmp;
	}
	return b;
}
long long boi(long long a, long long b){
	return a*b/uoc(a,b);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		if(n>m){
			int x=n;
			n=m;
			m=n;
		}
		scanf("%d%d", &n,&m);
		long long s=1;
		for(int i=n;i<=m;i++){
			s=boi(s,i);
		}
		printf("%lld\n", s);
	}
}