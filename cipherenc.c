#include "ciphenc.h"

void enc(char str[]){
	if(str[0]!='\0'){
		int i=0;
		while(str[i]!='\0'){
			str[i] += 3;
			i++;
		}
	}
}
void dec(char str[]){
	if(str[0]!='\0'){
		int i=0;
		while(str[i]!='\0'){
			str[i] -= 3;
			i++;
		}
	}
}