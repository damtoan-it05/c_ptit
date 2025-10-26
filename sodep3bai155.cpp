#include<stdio.h>
int tn(int n){
	int s=0,x=0, y=0,m=n;
	while(n){
		x=x+n%10;
		s=s*10+n%10;
		if(n%10==6){
			y++;
		}
		n/=10;
	}
	if(s == m && x%10 == 8 && y) return 1;
	return 0;
}
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	if(n>m){
		int s=n;
		n=m;
		m=s;
	}
	for(int i=n;i<=m;i++){
		if(tn(i)) printf("%d ", i);
	}
}