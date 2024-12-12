#include <stdio.h>
#include <string.h>

void xoaKyTu(char* str, char kyTuXoa) {
	int j=0;
	for(int i=0; str[i] != '\0'; i++) {
		if(str[i] != kyTuXoa) {
			str[j++] = str[i];
		}
	}
	str[j]= '\0';
}

int main() {
	char input[100], kyTuXoa;
	
	printf("Nhap chuoi cua ban: ");
	fgets(input, sizeof(input), stdin);
	
	size_t len = strlen(input);
	if(len > 0 && input[len-1] == '\n'){
		input[len-1] == '\0';
	}
	
	printf("Nhap ky tu can xoa: ");
	scanf("%c", &kyTuXoa);
	
	xoaKyTu(input, kyTuXoa);
	
	printf("Chuoi sau khi xoa: %s\n", input);
	
	return 0;
}
