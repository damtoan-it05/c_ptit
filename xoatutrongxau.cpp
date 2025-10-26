#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[], char b[]){
	char a2[205],b2[205];
	strcpy(a2, a);
	strcpy(b2, b);
	for(int i=0;i<strlen(a2);i++){
		if(a2[i]>='A'&&a2[i]<='Z') a2[i]+=32;
	}
	for(int i=0;i<strlen(b2);i++){
		if(b2[i]>='A'&&b2[i]<='Z') b2[i]+=32;
	}
	if(strcmp(a2,b2)) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int k=1;k<=t;k++){
		char a[205], b[50];
		gets(a);
		gets(b);
		char a1[100][100], b1[20][50];
		int x=0, y=0, z=0;
		char *token=strtok(a, " ");
		while(token!=NULL){
			strcpy(a1[x],token);
			x++;
			token=strtok(NULL, " ");
		}
		token=strtok(b, " ");
		while(token!=NULL){
			strcpy(b1[y],token);
			y++;
			token=strtok(NULL, " ");
		}
		printf("Test %d: ", k);
		for(int i=0;i<x;i++){
			int p=1;
			for(int j=0;j<y;j++){
				if(check(a1[i],b1[j])==0){
				    p=0;
			    }
			}
			if(p){
				printf("%s ", a1[i]);
			}
		}
		printf("\n");
	}
}