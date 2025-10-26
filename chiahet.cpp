#include<stdio.h>
#include<math.h>
int main(){
	int n, k, c=0;
	scanf("%d %d", &n, &k);
	for(int i=2;i<=n;i++){
		int m=i;
		if(m%2==0){
		while(m%2==0){
			m/=2;
			c++;
		}
		}
	}
	if(c>=k) printf("Yes");
	else printf("No");
}