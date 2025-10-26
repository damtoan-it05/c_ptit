#include<stdio.h>
#include<math.h>

int main(){
	int c, h;
	scanf("%d %d", &c, &h);
	for(int i=1;i<=h;i++){
		for(int j=1;j<=c;j++){
			if(i==1||i==h||j==1||j==c){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}