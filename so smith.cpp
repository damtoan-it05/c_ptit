#include<stdio.h>
#include<math.h>
int tong(int n){
	int s=0, x;
	while(n){
		x=n%10;
		s+=x;
		n/=10;
	}
	return s;
}
int ts(int n){
	int s=0, x;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			s+=tong(i);
			n/=i;
		}
	}
	if(n!=1) s+=tong(n);
	return s;
}
int main(){
	int n;
	scanf("%d", &n);
	if(ts(n)==tong(n)){
		printf("YES");
	}
	else printf("NO");
}