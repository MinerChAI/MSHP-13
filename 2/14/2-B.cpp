#include <cstdio>

#define CDynArr2(type, name, rows, cols) type** name = new type*[rows]; for (int i = 0; i < n; ++i) name[i] = new type[cols];
#define DDynArr2(name, rows) for (int i = 0; i < rows; ++i) delete[] name[i]; delete[] name;

int main(){
    int n, m, a, i_;
    scanf("%d%d", &n, &m);
    CDynArr2(int, arr, n, m)
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) scanf("%d", arr[i] + j);
    scanf("%d%d", &a, &i_);
    --i_; // Есть два типа людей: первый - те, кто индексирует массивы с единицы, и первый - те, кто индексирует массивы с нуля
    for (int i = 0; i < m; ++i) if (arr[i_][i] == a){
        printf("YES");
        return 0;
    }
    DDynArr2(arr, n)
    printf("NO");
}
