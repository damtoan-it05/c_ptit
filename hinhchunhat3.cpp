#include<stdio.h>
#include<math.h>
int main(){
	int n ,m;
	scanf("%d %d", &n,&m);
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			if(i>m)break;
		    printf("%d", j);
		}
		for(int j=2;j<=m-i+1;j++){
			if(i>m)break;
			printf("%d", j);
			
			}
		if(i>m){
			printf("%d", i);
			for(int k=i-1;k>=i-m+1;k--){
			printf("%d", k);
		}
		}
		printf("\n");
	}
}
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n ,m;
//	scanf("%d %d", &n,&m);
//	for(int i=1;i<=n;i++){
//		int x=i;
//		for(int j=1;j<=m;j++){
//			if(j<i){
//			printf("%d", x--);
//			}
//			else{
//				printf("%d", x++);
//			}
//		}
//		printf("\n");
//	}
//}
