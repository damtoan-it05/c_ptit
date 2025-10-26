#include<stdio.h>
#include<math.h>
int giaithua(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x*=i;
	}
	return x;
}
int strong(int n){
	int y, kq=0, m=n;
	while(n>0){
		y=n%10;
		kq+=giaithua(y);
		n/=10;
	}
	if(m==kq)return 1;
	return 0;
}
int main(){
	int n, m, max, min;
	scanf("%d %d", &n, &m);
	if(n>m){
		max=n;
		min=m;
	}
	else{
		max=m;
		min=n;
	}
	for(int i=min; i<=max;i++){
		if(strong(i)){
			printf("%d ", i);
		}
	}
}