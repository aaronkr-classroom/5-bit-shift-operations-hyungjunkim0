//#shift.c
#include <stdio.h>
int main(void) {
	int num = 8;
	
	//왼쪽 시프트 연산자를 사용하면 곱하기
	int mulBy2 = num << 1; // num *2
	int mulBy4 = num << 2; // num *4(2^2)
	int mulBy8 = num << 3; // num *8(2^3)
	
	//오른쪽 시프트 연산자를 사용하면 나누기
	int divBy2 = num >> 1; // num /2
	int divBy4 = num >> 2; // num /4(2^2)
	int divby8 = num >> 3; // num /8(2^3)

	//결과 출력하기
	printf("\nOriginal: %d", num);
	printf("\nnum <<1 : %d", mulBy2);
	printf("\nnum <<2 : %d", mulBy4);
	printf("\nnum <<3 : %d", mulBy8);
	printf("\nnum >>1 : %d", divBy2);
	printf("\nnum >>2 : %d", divBy4);
	printf("\nnum >>3 : %d", divby8);
	
	return 0;
}