#include <stdio.h>
#include <string.h>

int main() {
    char input[1000] = "December";
    char character;
    int count = 0;

    printf("Chuoi ban da khai bao: %s\n", input);

    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &character);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == character) {
            count++;
        }
    }

    printf("Ky tu %c xuat hien %d lan trong chuoi.\n", character, count);

    return 0;
}

