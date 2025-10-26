#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void sx(char s[][50], int z){
	for(int i=0;i<z;i++){
		int m=i;
		for(int j=i+1;j<z;j++){
			if(strcmp(s[j],s[m])<0) m=j;
		}
		char tmp[105];
		strcpy(tmp,s[m]);
		strcpy(s[m],s[i]);
		strcpy(s[i],tmp);
	}
}
int main(){
	char a[105], b[105];
	gets(a);
	gets(b);
	char a1[20][50],b1[20][50], s[20][50];
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
	for(int i=0;i<x;i++){
		int t=1;
		for(int j=0;j<y;j++){
			if(strcmp(a1[i],b1[j])==0){
				t=0;
			}
		}
		if(t){
		    strcpy(s[z],a1[i]);
		    z++;
		}
	}
	sx(s,z);
	for(int i=0;i<z;i++){
		for(int j=i+1;j<z;j++){
			if(strcmp(s[i],s[j])==0){
				strcpy(s[j]," ");
			}
		}
	}
	for(int i=0; i<z;i++){
		if(strcmp(s[i]," ")!=0){
			printf("%s ", s[i]);
		}
	}
}