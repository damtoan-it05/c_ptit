#include<stdio.h>
#include<string.h>
int main(){
	char a[1005][20];
	int n=0, max=0;
	while(scanf("%s", a[n])!=-1){
		int m=strlen(a[n]);
		if(max<m) max=m;
		n++;
	}
	for(int i=0;i<n;i++){
		if(strlen(a[i])==max){
			int t=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					t++;
					a[j][0]=0;
				}
			}
			printf("%s %d %d\n", a[i], max, t);
		}
	}
}