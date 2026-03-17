#include <stdio.h>

int recursionCount=0;

double f(int x, int n){
    if(recursionCount==n){
        return x;
    }
    recursionCount++;
    return x+1.0F/f(x*2,n);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%.10f\n", f(3,n));
    return 0;
}