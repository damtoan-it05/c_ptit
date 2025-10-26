#include<stdio.h>
#include<math.h>
void ngt(int n){
		long long s=1;
	    for(int i=2;i<=sqrt(n);i++){
		    if(n%i==0) s*=i;
		    while(n%i==0){
			    n/=i;
		    }
	    }
		if(n>1) s*=n;    
	    printf("%lld\n", s);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ngt(n);
	}
}