#include <stdio.h>

int stack = 0;

int main() {
    int ch;

    while ((ch = getchar()) != EOF) {
        switch (ch) {
            case '(' :
                stack++;
                continue;
            case ')' :
                stack--;
                if (stack < 0) {
                    printf("NO");
                    return 0;
                }
                continue;

            case '@' :
                goto end;

            default:
                continue;
        }
    }

    end:
    if (stack)
        printf("NO");
    else
        printf("YES");

    return 0;
}