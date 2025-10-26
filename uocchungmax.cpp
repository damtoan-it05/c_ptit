#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int ketqua;
		while(n*m !=0){//20 15
			if(m>n){
				m=m%n;//m=5
			}else{
				n=n%m;
			}
			ketqua=m+n;
		}
		printf("%d\n",ketqua);
		}
	}
