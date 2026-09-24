#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int i, left = 0, maxLen = 0, len;

    scanf("%s", s);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    len = strlen(s);

    for (i = 0; i < len; i++) {
        if (last[(unsigned char)s[i]] >= left)
            left = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - left + 1 > maxLen)
            maxLen = i - left + 1;
    }

    printf("%d", maxLen);

    return 0;
}
