#include<stdio.h>
#include<math.h>
int ngt(int n){
	for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return n>1;
}
int main(){
	long long n;
	scanf("%lld", &n);
	int a[15],b[15]={}, x=0;
	while(n!=0){
		a[x]=n%10;
		b[a[x]]++;
		n/=10;
		x++;
	}
	for(int i=x-1;i>=0;i--){
		if(ngt(a[i])&&b[a[i]]!=0){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]]=0;
		}
	}
}