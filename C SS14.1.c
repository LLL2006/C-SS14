#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 

    printf("Nhap vao mot chuoi: ");
    fgets(input, 100, stdin);

    size_t len = strlen(input);
    

    printf("Chuoi ban vua nhap: %s\n", input);
    printf("Ðo dai cua chuoi: %d\n", len-1);

    return 0;
}

