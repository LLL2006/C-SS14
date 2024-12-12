#include <stdio.h>
#include <string.h>

void demKyTu(char chuoi[]) {
	int dem[256] = {0};
	
	for(int i=0; i < strlen(chuoi); i++) {
		dem[chuoi[i]]++;
	}
	
	for(int i=0; i<256; i++){
		if(dem[i] > 0) {
			printf("%c: %d\n", i, dem[i]);
		}
	}
}

int main() {
	char chuoi[] = "Bui Duc Loi";
	
	demKyTu(chuoi);
	
	return 0;
}
