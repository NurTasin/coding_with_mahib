#include <stdio.h>

int main(){
    int line;
    scanf("%d",&line);
    char operation;
    scanf(" %c",&operation);

    float matrix[12][12];
    // Input the matrix
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f",&matrix[i][j]);
        }
    }
    // Calculating the sum for the line
    float sum=0;
    for(int i=0; i<12; i++){
        sum+=matrix[line][i];
    }
    if(operation=='S'){
        printf("%.1f\n",sum);
    }else{
        printf("%.1f\n", sum/12);
    }
    return 0;
}