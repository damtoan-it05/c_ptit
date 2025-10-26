#include<stdio.h>
#include<string.h>
int main(){
	char a[100005], b[100005];
	gets(a);
	int d=0;
	char c='a';
	for(int i=strlen(a)-1;i>=0;i--){
		if(a[i]>=c){
			c=a[i];
			b[d++]=c;
		}
	}
	for(int i=d-1;i>=0;i--){
		printf("%c", b[i]);
	}
}