#include<stdio.h>
#include<math.h>
long long cat(long long n){
	long long x=0;
	int y, z=0;
	while(n){
		y=n%10;
		if(y!=0&&y!=1&&y!=8&&y!=9){
			 printf("INVALID");
			 return 0;
		}
		if(y==1){
			x=x+pow(10,z);
		}
		z++;
		n/=10;
	}
	if(x>0) printf("%lld", x);
    else printf("INVALID");
    return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		cat(n);
		printf("\n");
	}
}