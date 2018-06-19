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
    ok=1000000000;
    ng=0;
    while(ok-ng>1){
        int mid=(ok+ng)/2;
        int tmp=k;
        for(i=0;i<n;i++){
            tmp-=(A[i]+mid-1)/mid;
            if(tmp<0)break;
        }
        if(tmp<0)ng=mid;
        else ok=mid;
    }
    printf("%d\n",ok);
    return 0;
}
