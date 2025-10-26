#include<stdio.h>
#include<math.h>
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	if (m<n){
		int dem, a=sqrt(m), b=sqrt(n);
		if(a*a<m){
			a++;
		}
		printf("%d\n", dem=b-a+1);
		for(int i=sqrt(m);i<=sqrt(n);i++){
			if(i*i>=m){
				printf("%d\n", i*i);
			}
	}
	
	}
}