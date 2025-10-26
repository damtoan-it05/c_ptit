#include<stdio.h>
#include<string.h>
int main(){
	char a[53];
	gets(a);
	int t=0, b1[26], b2[26];
	for(int i=0;i<26;i++) b1[i]=-1;
	for(int i=0;i<52;i++){
		if(b1[a[i]-'A']==-1){
			b1[a[i]-'A']=i;
		}
		else b2[a[i]-'A']=i;
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(b1[i]<b1[j]&&b1[j]<b2[i]&&b2[i]<b2[j]){
				t++;
			}
		}
	}
	printf("%d",t);
}