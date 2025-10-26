#include<stdio.h>
#include<math.h>
int USCLN(int n, int m){
	int kq;
	while(n*m !=0){//20 15
		if(m>n) m=m%n;//m=5
		else	n=n%m;
	}
	kq=m+n;
	return kq;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i=a;i<=b;i++){
		for(int j=a;j<=b;j++){
		if(USCLN(i,j)==1&&i<j){
			printf("(%d,%d)\n", i, j);
		}	
		}
	}
}