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
	int n;
	scanf("%d", &n);
	for(int i=1; i<n;i++){
		if(strong(i)){
			printf("%d ", i);
		}
	}
}