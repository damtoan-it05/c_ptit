#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int x=1;
	for(int j=1;j<=t;j++){
		int n=1, m=2;
		if(j%2==1){
			for(int i=1;i<=x;i++){
		    	printf("%d", n);
		    	n+=2;
		    }
		}
		if(j%2==0){
		for(int i=1;i<=x;i++){
		    	printf("%d", m);
		    	m+=2;
		    }	
		}
		x++;
		printf("\n");
	}
}