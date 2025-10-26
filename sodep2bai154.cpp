#include<stdio.h>
#include<math.h>
int tn(int n){
	int s=0, x=0,m=n;
	while(n){
		x=x+n%10;
		s=s*10+n%10;
		n/=10;
	}
	if(s==m&&x%10==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x=0;
		scanf("%d", &n);
		int a=pow(10,n-1),b=pow(10,n);
		for(int i=a;i<b;i++){
			if(tn(i)) x++;
		}
		printf("%d\n", x);
	}
}