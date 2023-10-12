#include <stdio.h>

#define FILENAME __FILE__

int _putchar(char c) {
    return putchar(c);
}

int main() {
    const char* filename = FILENAME;

    while (*filename != '\0') {
        _putchar(*filename);
        filename++;
    }

    _putchar('\n');

    return 0;
}

