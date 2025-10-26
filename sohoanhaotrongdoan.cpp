#include<stdio.h>
#include<math.h>
int hoanhao(int n){
	int x=0;
	for(int i=1; i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i!=i){
				x+=i+n/i;
			}
			else{
				x+=i;
			}
		}
	}
	if(x==2*n)return 1;
	else return 0;
}
int main(){
	int n, m, max, min;
	scanf("%d %d", &n, &m);
	if(n<m){
		max=m; min=n;
	}
	else{
		max=n; min=m;
	}
	for(int i=min; i<=max;i++){
		if(hoanhao(i)==1){
			printf("%d ", i);
		}
	}
}