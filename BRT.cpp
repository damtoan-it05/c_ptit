#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long a[n];
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		long long min=1e9, d=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long x=abs(a[j]-a[i]);
				if(x < min){
					min = x;
					d = 0;
				}
				if(x == min){
					d++;
				}
			}
		}
		printf("%lld %lld\n", min, d);
	}
}