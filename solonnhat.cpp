#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
	 int a[n], c=1;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]>c) c=a[i];
		}
		printf("%d\n", c);
		for(int i=0;i<n;i++){
		if(a[i]==c) printf("%d ", i);	
		}
		printf("\n");
	}
}