#include<stdio.h>
#include<math.h>
int sang(int n){
	for(int i=2; i<=sqrt(n);i++){
	if(n%i==0){
		return 0;
	   }	
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int x=0, i=2;
	while(x<n){
		if(sang(i)){
			printf("%d\n", i);
			x++;
		}
		i++;
	}
}