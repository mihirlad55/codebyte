#include <stdio.h>
#include <string.h>

void LetterChanges(char str[]) {
    size_t len = strlen(str);
    char out[len+1];
    strcpy(out, str);

    for (size_t i = 0; i < len; i++) {
        if (out[i] >= 'a' && str[i] <= 'z') {
            if (out[i] == 'z') out[i] = 'a';
            else out[i]++;

            switch (out[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    out[i] -= ('a' - 'A');
                    continue;
                default:
                    continue;
            }
        }
    }
    printf("%s", out);
}


int main(void) {
    LetterChanges(gets(stdin));
    return 0;
}
