#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void doi(int a[], int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++; r--;
	}
}
char *tong(char a1[], char a2[]){
	int n1=strlen(a1),n2=strlen(a2), n=0;
	int x1[n2], x2[n2], z[n2+1];
	for(int i=0;i<n1;i++) x1[i]=a1[i]-'0';
	for(int i=0;i<n2;i++) x2[i]=a2[i]-'0';
	doi(x1,n1);doi(x2,n2);
	for(int i=n1;i<n2;i++){
		x1[i]=0;
	}
	int nho=0;
	for(int i = 0;i<n2;i++){
		int tmp=x1[i]+x2[i]+nho;
		z[n++]=tmp%10;
		nho=tmp/10;
	}
	if(nho) z[n++]=nho;
	char *b = (char*)malloc(n+1);
	for(int i=n-1;i>=0;i--){
		b[n-1-i]=z[i]+'0';
	}
	b[n]='\0';
	return b;
}
int main(){
	char a[205];
	scanf("%s", a);
	int n=strlen(a);
	while(n>1){
		char a1[105], a2[105];
		strncpy(a1, a, n/2);
        a1[n/2] = '\0';
        strcpy(a2, a + n/2);
        char *b = tong(a1, a2);
        strcpy(a, b);
        free(b);
        n = strlen(a);
        printf("%s\n", a);
	}
}