#include<stdio.h>
#include<math.h>
int tnt(int n){
	int s=0, c=0, m=n;
	while(n){
		s=s*10+n%10;
		c+=n%10;
		if(n%10==4) return 0;
		n/=10;
	}
	if(s==m&&c%10==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a=pow(10,n-1),b=pow(10,n);
		for(int i=a;i<=b;i++){
			if(tnt(i)) printf("%d ", i);
		}
		printf("\n");
	}
}