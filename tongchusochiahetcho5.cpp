#include<stdio.h>
#include<math.h>
int ngt(int n){
	int s=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	while(n){
		s+=n%10;
		n/=10;
	}
	if(s%5==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	int x=0;
	for(int i=2;i<t;i++){
		if(ngt(i)){
			printf("%d ", i);
			x++;
		}
	}
	printf("\n");
	printf("%d", x);
}