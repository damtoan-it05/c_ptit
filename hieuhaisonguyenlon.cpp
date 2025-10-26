#include<stdio.h>
#include<string.h>
void dao(int a[], int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++;r--;
	}
}
void hieu(char a[], char b[]){
	int n1=strlen(a), n2=strlen(b);
	int x[n1],y[n1],z[n1];
	for(int i=0;i<n1;i++) x[i]=a[i]-'0';
	for(int i=0;i<n2;i++) y[i]=b[i]-'0';
	dao(x,n1);dao(y,n2);
	for(int i=n2;i<n1;i++){
		y[i]=0;
	}
	int nho=0, n=0;
	for(int i=0;i<n1;i++){
		int tmp=x[i]-y[i]-nho;
		if(tmp<0){
			z[n++]=10+tmp;
			nho=1;
		}
		else z[n++]=tmp;
	}
	int ok=0;
	for(int i=n-1;i>=0;i--){
		if(z[i]){
			ok=1;
		}
		if(ok) printf("%d",z[i]);
	}
	if(ok==0) printf("0");
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1005], b[1005];
		gets(a);
		gets(b);
		if(strlen(a)>strlen(b)||strlen(a)==strlen(b)&&strcmp(a,b)>0) hieu(a,b);
		else hieu(b,a);
		printf("\n");
	}
}