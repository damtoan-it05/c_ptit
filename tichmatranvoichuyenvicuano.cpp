#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int k=1;k<=t;k++){
		int n, m;
	    scanf("%d%d", &n, &m);
	    int a1[n][m], a2[m][n], a[n][n];
	    for(int i=0;i<n;i++){
		    for(int j=0;j<m;j++){
		    	scanf("%d", &a1[i][j]);
	    	}
	    }
	    for(int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		    	a2[i][j]=a1[j][i];
	    	}
	    }
	    for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        a[i][j]=0;
		        for(int p=0;p<m;p++){
		        	a[i][j]+=a1[i][p]*a2[p][j];
				}
	    	}
	    }
	    printf("Test %d:\n", k);
	    for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		    	printf("%d ", a[i][j]);
	    	}
	    	printf("\n");
	    }
	}
	
}