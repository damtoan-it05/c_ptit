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
	int n;
	scanf("%d", &n);
	for(int i=1; i<n;i++){
		if(hoanhao(i)==1){
			printf("%d ", i);
		}
	}
}