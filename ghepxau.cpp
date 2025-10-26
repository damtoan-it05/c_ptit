#include<stdio.h>
#include<string.h>
int cmp(char a[], char b[]){
    char c[500], d[500];
    strcpy(c, a);
    strcpy(d, b);
    strcat(c, b);
    strcat(d, a);
    if (strcmp(c, d) < 0)
        return 1;
    return 0;
}
void sx(char a[][200], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(cmp(a[j],a[i])){
				char tmp[205];
		        strcpy(tmp,a[j]);
	    	    strcpy(a[j],a[i]);
	        	strcpy(a[i],tmp);
			}
		}
		
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char a[100][200];
		for(int i=0;i<n;i++){
			scanf("%s", a[i]);
		}
		sx(a,n);
		for(int i=0;i<n;i++){
			printf("%s",a[i]);
		}
		printf("\n");
	}
}