#include<stdio.h>
#include<string.h>
struct danhsach{
	int ma;
	int lan;
};
typedef struct danhsach DS;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		DS a[n+1];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i].ma);
			a[i].lan=1;
		}
		int ok=1;
		for(int i=0;i<n;i++){
			if(a[i].lan==1){
			    for(int j=i+1;j<n;j++){
			    	if(a[j].ma==a[i].ma){
			    		printf("%d\n", a[i].ma);
			    		ok=0;
				        break;
					}
				}
				if(ok==0) break;
			}
		}
		if(ok) printf("NO\n");
	}
}