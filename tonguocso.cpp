#include<stdio.h>
#include<math.h>
int a[2000005];
void ngt(){
	for(int i=2;i<=sqrt(2000000);i++){
	    if(!a[i]){
	    	for(int j=i*i;j<=2000000;j+=i){
	    		if(!a[j]) a[j]=i;
			}
		}
    }
    for(int i=2;i<=2000000;i++){
    	if(!a[i]) a[i]=i;
	}
}
int main(){
	ngt();
	int t;long long sum=0;
	scanf("%d", &t);
	for(int j=1;j<=t;j++){
		int n;
		scanf("%d", &n);
		while(n>1){
			sum+=a[n];
			n/=a[n];
		}
	}
	printf("%lld", sum);
}