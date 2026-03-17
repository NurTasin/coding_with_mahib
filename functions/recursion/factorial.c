#include <stdio.h>


int fact(int x){
    if(x==1){
        return 1;
    }else{
        return x*fact(x-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("fact(%d)=%d\n",n,fact(n));
    return 0;
}