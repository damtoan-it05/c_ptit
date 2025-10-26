#include<stdio.h>
#include<string.h>
struct danhsach{
	int so;
	int lan;
};
int check(int n){
	int x = 9;
    while (n != 0){
        int k = n % 10;
        if (k > x)
            return 0;
        x = k;
        n /= 10;
    }
    return 1;
}
typedef struct danhsach DS;
int main(){
	DS k, a[100005];
	int x, n=0;
	while(scanf("%d", &x)!=-1){
		if(check(x)){
			a[n].so=x;
			a[n].lan=1;
			n++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].lan==1){
			for(int j=i+1;j<n;j++){
			    if(a[i].so==a[j].so){
			    	a[i].lan++;
			    	a[j].lan=0;
				}
		    }
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].lan>0){
			for(int j=i+1;j<n;j++){
			    if(a[i].lan < a[j].lan){
			    	k=a[i];
			    	a[i]=a[j];
			    	a[j]=k;
				}
		    }
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].lan>0) printf("%d %d\n", a[i].so, a[i].lan);
	}
}