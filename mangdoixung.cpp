#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], c=1;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<(n/2);i++){
			if(a[i]!=a[n-1-i]){
				printf("NO\n");
			    c--;
			    break;
			}
		}
		if(c==1) printf("YES\n");
	}
}