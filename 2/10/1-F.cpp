#include <stdio.h>

int digitSum(int k);

int main(){
    int temp, sum = 0;
    for (int i = 5; i; --i){
        scanf("%d", &temp);
        sum += digitSum(temp);
    }
}

int digitSum(int k){
    char num[10];
    int sum;
    sprintf(num, "%d", k);
    while(*num){
        sum += *num++ - 48;
    }
    return sum;
}
