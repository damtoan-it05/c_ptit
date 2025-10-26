#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int m,n;
	    scanf("%d%d", &m,&n);
	    getchar();
	    char c;
    	scanf("%c", &c);
    	int a[m],b[n];
    	for(int i=0;i<m;i++){
  		scanf("%d", &a[i]);
	    }
    	for(int i=0;i<n;i++){
    		scanf("%d", &b[i]);
    	}
    	int s=n+m, s1=0;
    	int x[s];
    	for(int i=0;i<m;i++){
    	    x[s1]=a[i];
    	    s1++;
    	}
	    for(int i=0;i<n;i++){
    	    x[s1]=b[i];
    	    s1++;
    	}
    	for(int i=0;i<s;i++){
    		for(int j=i+1;j<s;j++){
    			if(x[i]>x[j]){
    				int tmp=x[i];
    				x[i]=x[j];
    				x[j]=tmp;
    			}
    		}
     	}
    	int k=c;
    	switch(k){
	    	case 70:
	    		for(int i=0;i<m;i++){
	    			printf("%d ", a[i]);
	    		}
	    		for(int i=0;i<n;i++){
	    			printf("%d ", b[i]);
	    		}
	    		printf("\n");
	    		break;
	    	case 65:
		        for(int i=0;i<n;i++){
		    		printf("%d ", b[i]);
		    	}
	    		for(int i=0;i<m;i++){
	    			printf("%d ", a[i]);
	    		}
	    		printf("\n");
	    		break;
	    	case 84:
 	    		for(int i=0;i<s;i++){
	    			printf("%d ", x[i]);
	    		}
	    		printf("\n");
	    		break;
	    	case 71:
	    		for(int i=s-1;i>=0;i--){
	    			printf("%d ", x[i]);
	    		}
	    		printf("\n");
	    		break;
    	}
	}
}