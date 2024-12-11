#include <stdio.h>
#include <string.h>

int main() {
    char input[100] = "December";

    printf("Chuoi ban da khai bao: %s\n", input);
    printf("Cac ky tu trong chuoi: ");
    for (size_t i = 0; i < strlen(input); i++) {
        printf("%c ", input[i]);
    }
    printf("\n");

    return 0;
}

