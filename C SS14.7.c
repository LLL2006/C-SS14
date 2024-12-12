#include <stdio.h>
int main(){
	char input[100]="hsdaku^4588%^$";
	int countCharacter=0;
	int countCharacterNumber= 0;
	int countCharacterSpecial= 0;
	for(int i=0;i<strlen(input);i++){
		if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')){
			countCharacter++;
		} else if(input[i] >= '0' && input[i] <= '9'){
			countCharacterNumber++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("So ky tu chu cai la: %d\n",countCharacter);
	printf("So ky tu chu so la: %d\n",countCharacterNumber);
	printf("So ky tu dac biet la: %d\n",countCharacterSpecial);
	
	return 0;
}
