#include <stdio.h>

int main(){
    int i1;
    int i2;
    double result;
    
    scanf("%d %d", &i1, &i2);
    result = (double)i1 / i2;
    printf("%.32f", result);
    return 0;
}