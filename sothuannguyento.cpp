#include<stdio.h>
#include<math.h>
int check1(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	{
		int x,y=0;
		while(n){
			x=n%10;
			n/=10;
			if(x!=2&&x!=3&&x!=5&&x!=7) return 0;
			y+=x;
		}
		if(check1(y)) return 1;
	}
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,c=0;
		scanf("%d%d",&n,&m);
		for(int i=n;i<=m;i++){
			if(check(i)&&check1(i)){
				c++;
			}
		}
		printf("%d\n", c);
	}
}