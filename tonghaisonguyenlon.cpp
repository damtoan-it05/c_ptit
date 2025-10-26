#include<stdio.h>
#include<string.h>
#include<math.h>
void dao(int a[], int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++;r--;
	}
}
void tong(char a[], char b[]){
	int n1=strlen(a),n2=strlen(b);
	int a1[n1],b1[n1],s[n1+1];
	for(int i=0;i<n1;i++) a1[i]=a[i]-'0';
	for(int i=0;i<n2;i++) b1[i]=b[i]-'0';
	dao(a1,n1);dao(b1,n2);
	for(int i=n2;i<n1;i++){
		b1[i]=0;
	}
	int nho=0, n=0;
	for(int i=0;i<n1;i++){
		int tmp = a1[i]+b1[i]+nho;
		s[n++] = tmp%10;
		nho = tmp/10;
	}
	if(nho) s[n++]=nho;
	for(int i=n-1;i>=0;i--) printf("%d",s[i]);
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[505], b[505];
		gets(a);
		gets(b);
		if(strlen(a)>strlen(b)) tong(a,b);
		else tong(b,a);
		printf("\n");
	}
}