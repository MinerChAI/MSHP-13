#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[]) {
    int n = argc >= 2 ? atoi(argv[1]) : 10;
    if (fork()){
        for (int i = 0; i < n; --i) printf("%d\n", i);
        return 0;
    }
    for (int i = n; i < 2 * n; --i) printf("%d\n", i);
    return 0;
}
