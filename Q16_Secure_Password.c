#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lower = 0, upper = 0, digit = 0, special = 0;
    int n, i;

    scanf("%s", s);

    n = strlen(s);

    if (n < 10) {
        printf("NO");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower = 1;

        if (i > 0 && i < n - 1) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;

            if (s[i] >= '0' && s[i] <= '9')
                digit = 1;

            if (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                s[i] == '&' || s[i] == '?')
                special = 1;
        }
    }

    if (lower && upper && digit && special)
        printf("YES");
    else
        printf("NO");

    return 0;
}
