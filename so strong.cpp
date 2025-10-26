#include<stdio.h>
#include<math.h>
int giaithua(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x*=i;
	}
	return x;
}
int main(){
	int a, b, c=0, d;
	scanf("%d",&a);
	d=a;
	while(a){
		b=a%10;
		c+=giaithua(b);
		a/=10;
	}
	if(d==c){
		printf("1");
	}
	else{
		printf("0");
	}
}