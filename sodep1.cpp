#include<stdio.h>
#include<math.h>
int nguyento(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int fb[30];
int fibo(int n){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=25;i++){
		fb[i]=fb[i-1]+fb[i-2];
		if(fb[i]==n||fb[1]==n){
			return 1;
			break;
		}
	}
	return 0;
}
int tong(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
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
	for(int i=min;i<=max;i++){
		int c=tong(i);
		if(fibo(c)&&nguyento(i)){
			printf("%d ", i);
		}
	}
}