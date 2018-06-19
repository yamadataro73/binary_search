#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, ok, ng;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    ok=1000000000;
    ng=0;
    while(ok-ng>1){
        int mid=(ok+ng)/2;
        int sum=0;
        int ninzu=1 ;
        for(int i=0;i<n;i++){
            if(sum+A[i]<=mid)sum+=A[i];
            else {
                ninzu++;
                if((sum=A[i])>mid)ninzu=k+1;
            }
        }
        if(ninzu<=k)ok=mid;
        else ng=mid;
    }
    printf("%d\n",ok);
    return 0;
}
