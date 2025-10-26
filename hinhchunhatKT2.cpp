#include<stdio.h>
#include<math.h>
int main(){
	int n ,m;
	scanf("%d %d", &n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>=i){
				printf("%c", 64+j);
			}
		}
		for(int k=i-1;k>=1&&k<m;k--){
			printf("%c", 64+k);
		}
		if(i>m){
			for(int k=m;k>=1;k--){
			printf("%c", 64+k);
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
//	for(int i = 1 ; i <n ; i ++){
//		int a=i;
//		if(i>=m){
//			printf("%d",i);
//			for(int k=m-1;k>=1;k--){
//				printf("%d",k);
//			}
//			printf("\n");
//		}
//		else{
//		while(a!=m){
//			printf("%d",a);
//			a++;
//			if(a==m){
//				printf("%d",m);
//			}
//			if(a==m){
//				for(int j=i-1;j>=1;j--){
//					printf("%d",j);
//				}
//				break;
//			}
//		}
//		printf("\n");
//	}
//}
//	}