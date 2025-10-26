#include<stdio.h>
#include<string.h>
void check(char a[], char b[], char c[], int n){
	char x[1000]="\0";
	for(int i=0;i<=2*n;i++){
		if(strcmp(c,x)==0){
    		printf("%d\n", i);
    		return;
	    }
	    int y=0;
	    for(int j=0;j<n;j++){
	    	x[y++]=b[j];
	    	x[y++]=a[j];
		}
		for(int j=0;j<n; j++){
			a[j]=x[j];
		}
		for(int j=n;j<2*n;j++){
			b[j-n]=x[j];
		}
	}
	printf("-1\n");
}
int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		char a[500], b[500], c[1000];
		scanf("%s%s%s", a, b, c);
		check(a, b, c, n);
	}
}