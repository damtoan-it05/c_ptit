#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[102][100];
	gets(a);
	int n=0;
	char *token=strtok(a," ");
	while(token!=NULL){
		strcpy(b[n++],token);
	    token = strtok(NULL, " ");
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(b[j],b[i])==0) b[j][0]=0;
		}
		if(b[i][0]!=0) printf("%s ",b[i]);
	}
}