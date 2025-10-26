#include<stdio.h>
#include<math.h>
void phantich(int n){
	int s=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				if(s==1) printf("x");
				printf("%d", i);
				n/=i;
				s=1;
			}
		}
	}
	
	if(n>1){
		if(s==1) printf("x");
		printf("%d", n);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	phantich(n);
	return 0;
}