#include <stdio.h>
#include <string.h>

int main() {
    char input[100] = "December";

    printf("Chuoi ban da khai bao: %s\n", input);
    printf("Chuoi dao nguoc: ");
    for (int i = strlen(input) - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}

