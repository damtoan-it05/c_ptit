#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int x=1;
	for(int i=1;i<=t;i++){
		if(i%2==1){
			for(int j=1;j<=i;j++){
				printf("%c ", x+96);
			    x++;
			}
		}
		int y=x+i-1;
		if(i%2==0){
		    for(int j=1;j<=i;j++){
				printf("%c ", y+96);
			    y--;
			}
			x=x+i;
		}
		
		printf("\n");
	}
}