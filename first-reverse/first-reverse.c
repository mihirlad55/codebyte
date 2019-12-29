#include <stdio.h>
#include <string.h>

void FirstReverse(char str[]) {
    size_t size = strlen(str);
    char out[size + 1];
    out[size] = '\0';

    for (size_t i = size; i-- > 0;) {
        size_t j = size - i - 1;
        out[j] = str[i];
    }

    printf("%s", out);
}

int main() {
    char input[300];

    fgets(input, sizeof(input), stdin);

    // Remove new line characters
    input[strcspn(input, "\n")] = 0;

    // size - 1 to remove newline
    FirstReverse(input);

    return 0;
}
