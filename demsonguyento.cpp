#include<stdio.h>
#include<math.h>
int ngt(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int cs(int n){
	while(n){
		int x=n%10;
		if(ngt(x)){
			n/=10;
		}
	    else return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b, c=0;
		scanf("%d %d", &a, &b);
		for(int i=a; i<=b; i++){
			if(ngt(i)){
			  if(cs(i)) c++;	
			}
		}
		printf("%d\n", c);
	}
}