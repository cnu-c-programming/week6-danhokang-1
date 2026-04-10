#include <stdio.h>

int main() {
    char *names[5] = {"kim","lee","park","choi","jeong"};

    for (int i=0; i<5; i++) {
        char *p = *(names + i);
        while (*p != '\0') {
            printf("%c", *p);
            p++;
        }
        printf("\n");
    }
}
