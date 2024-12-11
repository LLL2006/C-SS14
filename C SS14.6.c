#include <stdio.h>
#include <string.h>

int main() {
    char input[100] = "12December";
    int chuCai = 0;

    printf("Chuoi ban da khai bao: %s\n", input);

    for (int i = 0; i < strlen(input); i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            chuCai++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", chuCai);

    return 0;
}

