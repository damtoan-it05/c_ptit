#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
	char b[20][50];
	int n=0;
	char *token=strtok(a," ");
	while(token!=NULL){
		strcpy(b[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int c[n];
	for(int i=0;i<n;i++){
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		if(c[i]==0){
			int d=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(b[i],b[j])==0){
					d++;
					c[j]=1;
				}
			}
			printf("%s %d\n", b[i], d);
		}
	}
	
}