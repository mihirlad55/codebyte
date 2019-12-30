#include <stdio.h>
#include <string.h>

void LongestWord(char sen[]) {
    size_t max = 0;
    size_t start = 0;
    size_t end = 0;
    size_t len = 0;

    for (size_t i = 0; i < strlen(sen) + 1; i++) {
        if ((sen[i] >= 'A' && sen[i] <= 'z') || (sen[i] >= '0' && sen[i] <= '9')) {
            len++;
        } else if (len > max) {
            end = i;
            start = end - len;
            max = len;
            len = 0;
        } else {
            len = 0;
        }
    }

    printf("%.*s", (unsigned int) end - start, sen + start);
}

int main(void) {
    LongestWord(gets(stdin));
    return 0;
}
