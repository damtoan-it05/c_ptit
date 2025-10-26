#include<stdio.h>
void sapxep(int a[],int na){
	for(int i=0;i<na;i++){
		for(int j=na-1;j>i;j--){
		    if(a[j]<a[j-1]){
		    	int x=a[j];
	    		a[j]=a[j-1];
		    	a[j-1]=x;
	    	}
    	}
	}
}
void in(int a[], int na){
	for(int i=0;i<na;i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int x, a[n],b[n],na=0, nb=0;
	for(int i=0;i<n;i++){
		scanf("%d", &x);
		if(x%2==0){
			a[na++]=x;
		}
		else b[nb++]=x;
	}
	sapxep(a,na);
	sapxep(b,nb);
	in(a,na);
	in(b,nb);
}