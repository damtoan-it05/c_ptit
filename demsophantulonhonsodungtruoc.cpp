#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		int a[n], c=0, x=0;
		for(int j=0;j<n;j++){
			scanf("%d", &a[j]);
			if(a[j]>x){
				c++;
				x=a[j];
			}
		}
		
		printf("%d\n", c);
	}
}