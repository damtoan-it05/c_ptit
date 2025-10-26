#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[30005]={}, x=0,y,ok=1;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(b[a[i]]>x){
				x=b[a[i]];
				y=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(b[a[i]]==x){
				printf("%d ", a[i]);
				ok=0;
				b[a[i]]=0;
			}
		}
		if(ok==1) printf("%d", y);
		printf("\n");
	}
}