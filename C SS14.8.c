#include <stdio.h>
#include <string.h>

void vietHoaChuDau(char* str) {
	for(int i=0; str[i] != '\0'; i++){
		if(i == 0 || str[i - 1] == ' ') {
			if(str[i] >= 'a' && str[i] <= 'z') {
				str[i] -= 32;
			}
		}
	}
}

int main() {
	char input[100];
	
	printf("Nhap chuoi cua ban: ");
	fgets(input, sizeof(input), stdin);
	
	size_t len = strlen(input);
	if (len > 0 && input[len-1] == '\n'){
		input[len-1] = '\0';
	}
	
	vietHoaChuDau(input);
	
	printf("Chuoi sau khi viet hoa la: %s\n",input);
	
	return 0;
}
