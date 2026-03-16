#include <stdio.h>
#include <limits.h>

int main(){
    int numbers[10]={9,3,5,-10,13,27,99,-142,91,57};
    // Searching the actual max of the array
    int max = INT_MIN;
    for(int i=0; i<10; i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }
    // Searching the second max of the array
    int second_max=INT_MIN;
    for(int i=0; i<10; i++){
        if(numbers[i]>second_max){
            if(numbers[i]!=max){
                second_max=numbers[i];
            }
        }
    }
    printf("Max: %d\n", max);
    printf("Second Max: %d\n", second_max);
    return 0;
}