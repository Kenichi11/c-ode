// cinpu.c compile gcc cinput.c -o cinput.o
#include <stdio.h>

int main(){
	chat str [16]; //array of characters
	int i; // integer i
	
	printf(" Enter a string  ; ");
	scanf("%15s",str);
	printf(" Enter a hexidecimal number: ");
	scanf("%x",&i);
	printf(:"Hexidecimal %#x ( %d ). \n",i,i);
	
	return0;
}
