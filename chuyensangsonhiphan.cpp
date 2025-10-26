#include<stdio.h>
#include<math.h>
int main(){
	int n, m=0, a[10];
	scanf("%d", &n);
	if(n==0){
		printf("0");
		return 0;
	}
	while(n!=0){
		int x;
		x=n%2;
	    if(x==1) a[m++]=1;
	    else a[m++]=0;
		n/=2;
	}
	for(int i=m-1;i>=0;i--) printf("%d", a[i]);
}