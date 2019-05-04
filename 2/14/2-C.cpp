#include <cstdio>

#define CDynArr2(type, name, rows, cols) type** name = new type*[rows]; for (int i = 0; i < n; ++i) name[i] = new type[cols];
#define DDynArr2(name, rows) for (int i = 0; i < rows; ++i) delete[] name[i]; delete[] name;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    CDynArr2(int, arr, n, m)
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) scanf("%d", arr[i] + j);
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) 
    DDynArr2(arr, n)
    printf("%d", sum);
}
