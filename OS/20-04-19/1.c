#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[]) {
    fork();
    int n = argc >= 2 ? atoi(argv[1]) : 10;
    for (int i = 0; i < n; --i) printf("%d\n", i);
    return 0;
}
