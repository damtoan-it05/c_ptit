#include<stdio.h>
#include<math.h>
long long fb[100];
void fibo(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
int main(){
	int n, s=0;
	scanf("%d", &n);
	fibo();
	for(int i=0;i<=92;i++){
		if(fb[i]==n){
			s++;
			break;
		}
	}
	if(s){
		printf("1");
	}
	else{
		printf("0");
	}
}