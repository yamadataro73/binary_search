#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
    int i,ok,ng;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    ok=0;
    ng=1e9+1;
    while(ng-ok>1){
        int mid=(ok+ng)/2;
        int tmp=0;
        for(i=0;i<n;i++){
            tmp+=A[i]/mid;
            if(tmp>=k)break;
        }
        if(tmp<k)ng=mid;
        else ok=mid;
    }
    printf("%d\n",ok);
    return 0;
}
