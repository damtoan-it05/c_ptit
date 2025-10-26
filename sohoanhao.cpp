#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i!=i){
				sum+=i+n/i;
			}
			else{
				sum+=i;
			}
		}
	}
	if(2*n==sum){
		printf("1");
	}
	else{
		printf("0");
	}
	
}