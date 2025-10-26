#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int check(char a[]){
	int n=strlen(a);
	int l=0,r=n-1;
	while(l<r){
		if(a[l]!=a[r]) return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	char a[100];
	char x[10005][100];
	int n=0, max=0;;
	while(scanf("%s", a)!=-1){
		if(check(a)){
			int m=strlen(a);
			strcpy(x[n++],a);
			if(max<m){
		    	max=m;
		    }
		}	
	}
	for(int i=0;i<n;i++){
		if(strlen(x[i])==max){
			int t=1;
			for(int j=i+1;j<n;j++){
				if(!strcmp(x[i],x[j])){
					t++;
					x[j][0]=0;
				}
			}
		    printf("%s %d\n",x[i],t);
		}
	}
	
}