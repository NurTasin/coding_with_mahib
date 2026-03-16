#include <stdio.h>
#include <limits.h>

int main(){
    int numbers[10]={9,3,5,-10,13,27,99,-142,91,57};
    int result = INT_MIN;
    for(int i=0; i<10; i++){
        if(numbers[i]>result){
            result=numbers[i];
        }
    }
    printf("Max: %d\n", result);
    return 0;
}