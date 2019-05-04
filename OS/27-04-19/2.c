#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(){
    int arr[2];
    pipe(arr);
    if (fork()) {
        close(arr[0]);
        char* c;
        scanf("%c", c);
        write(arr[1], c, 1);
        wait(0);
        return 0;
    }
    close(arr[1]);
    char c;
    read(arr[0], &c, 1);
    for (int i = 0; i < 5; ++i) printf("%c", c);
    return 0;
}
