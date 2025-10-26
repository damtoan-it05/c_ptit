#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int dt[10001], d=0;
void tach(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(isdigit(a[i])){
			int tmp = 0;
			while(a[i]!='*'){
				tmp = tmp*10 + (a[i]-'0');
				i++;
			}
			i+=3;
			int mu = 0;
			while(isdigit(a[i])){
				mu = mu*10 + (a[i]-'0');
				i++;
			}
			dt[mu] += tmp;
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a1[10000], a2[10000];
		gets(a1); gets(a2);
		memset(dt, 0, sizeof(dt));
		d=0;
		tach(a1); tach(a2);
		for(int i=10000;i>=0;i--){
			if(dt[i])
			d++;
		}
		for(int i=10000;i>=0;i--){
			if(dt[i]!=0){
				printf("%d*x^%d", dt[i],i);
				d--;
				if(d!=0) printf(" + ");
			}
		}
		printf("\n");
	}
}