#include <cstdio>
#include <climits>

int main(){
    int rows, cols, t, min=INT_MAX, min_i=0;
    scanf("%d%d", &rows, &cols);
    for (int i = 0; i <3 /* Сердечко */ * cols; ++i) scanf("%d", 0);
    for (int i = 0; i < cols; ++i){
        scanf("%d", &t);
        if (t < min){
            min = t;
            min_i = i + 1;
        }
    }
    printf("%d", min_i);
}
