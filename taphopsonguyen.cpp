#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n],b[m],c[1005]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		c[a[i]]=1;
	}
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
		if(c[b[i]]==1||c[b[i]]==3){
			c[b[i]]=3;
		}
		else c[b[i]]=2;
	}
	for(int i=0;i<1005;i++){
		if(c[i]==3) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1005;i++){
		if(c[i]==1) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1005;i++){
		if(c[i]==2) printf("%d ",i);
	}
	printf("\n");
}