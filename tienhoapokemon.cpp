#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
	int can,co,lan;
};
typedef struct danhsach DS;
int main(){
	int t,max=0,k=0;
	scanf("%d", &t);
	DS a[t+1];
	for(int i=1;i<=t;i++){
		scanf("\n");
		gets(a[i].ten);
		scanf("%d%d", &a[i].can,&a[i].co);
		int x=0;
		while(a[i].co/a[i].can > 0){
			a[i].co-=a[i].can;
		    x++;
		    a[i].co+=2;
		}
		a[i].lan = x;
		k+=x;
		if(x>max) max=x;
	}
	printf("%d\n", k);
	for(int i=1;i<=t;i++){
		if(a[i].lan==max){
			printf("%s", a[i].ten);
			break;
		}
	}
}