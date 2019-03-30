#include <stdio.h>

int main(){
    int n, c = 0;
    double h;
    bool t;
    scanf("%d", &n);
    h = n / 2.0;
    //printf("%f", h);
    for (int i = 0; i < n; scanf("%d", &t), c += t, ++i);
    //printf("%d %f\n", c, h);
    printf(c >  h ? "They do not understand!"          :
           c == h ? "May be I should buy more Tverdysh":
                    "I am a hero!");
}
