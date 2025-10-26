#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[200];
    gets(a);
    int c=0,d=0;
    for(int i=0;i<strlen(a);i++){
    	if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') c++;
    	if(a[i]>='0'&&a[i]<='9') d++;
	}
	printf("%d %d %d", c, d, strlen(a)-c-d);
}