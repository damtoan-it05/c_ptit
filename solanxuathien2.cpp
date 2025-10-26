#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int j=1; j<=t;j++){
		int n;
	    scanf("%d", &n);
	    int a[n],b[100005]={};
	    for(int i=0;i<n;i++){
		    scanf("%d", &a[i]);
		    b[a[i]]++;
	    }
	    printf("Test %d:\n", j);
	    for(int i=0;i<n;i++){
		    if(b[a[i]]>0){
			   printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
			   b[a[i]]=0;
		    }
	    }
	}
}