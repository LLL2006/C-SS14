#include <stdio.h>
#include <string.h>

int main() {
    char input[1000] = "Bui Duc Loi";
    int word_count = 1;

    printf("Chuoi ban da khai bao: %s\n", input);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == ' ') {
            word_count++;
        }
    }

    printf("So tu trong chuoi: %d\n", word_count);

    return 0;
}

