#include <cstdio>

int main(){
    int n, t, oc = 0, ec = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &t);
        (i % 2 ? ec : oc) += t;
    }
    printf(ec > oc ? "YES" : "NO");
}
