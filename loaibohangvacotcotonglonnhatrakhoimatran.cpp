#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int k=1;k<=t;k++){
		int n,m;
		scanf("%d%d", &n, &m);
	    int a[n][m], h[n], c[m];
	    for(int i=0;i<n;i++) h[i]=0;
	    for(int i=0;i<m;i++) c[i]=0;
		for(int i=0;i<n;i++){
		    for(int j=0;j<m;j++){
			    scanf("%d", &a[i][j]);
			    h[i]+=a[i][j];
			    c[j]+=a[i][j];
		    }
	    }
	    int mh,mc,max=0;
	    for(int i=0;i<n;i++){
	    	if(max<h[i]){
	    		max=h[i];
	    		mh=i;
			}
		}
		max=0;
	    for(int i=0;i<m;i++){
	    	if(max<(c[i]-a[mh][i])){
	    		max=(c[i]-a[mh][i]);
	    		mc=i;
			}
		}
		printf("Test %d:\n", k);
		for(int i=0;i<n;i++){
		   for(int j=0;j<m;j++){
		       if(i!=mh&&j!=mc){
		       	printf("%d ", a[i][j]);
			   } 	
		    }
		    printf("\n");
        }
	}
}