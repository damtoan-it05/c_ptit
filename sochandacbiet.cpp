#include<stdio.h>
#include<math.h>
int db(long long n){
	int m;
	while(n!=0){
		m=n%10;
		if(m%2!=0) {
			return 0;
		}
		n/=10;
}
return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	long long n;
	scanf("%lld", &n);
	if(db(n)){
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}
}