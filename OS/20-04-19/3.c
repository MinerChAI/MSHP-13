#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char const *argv[]) {
    int n = argc >= 2 ? atoi(argv[1]) : 10;
    if (fork()){
        int s;
        wait(&s);
        return 0;
    }
    execlp("top", "top", NULL);
    return 0;
}
