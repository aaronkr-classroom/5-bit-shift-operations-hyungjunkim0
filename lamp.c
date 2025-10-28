#include<stdio.h>

unsigned char ResetBit(unsigned char, unsigned char);
unsigned char SetBit(unsigned char, unsigned char);
unsigned char GetBit(unsigned char, unsigned char);

int main(void) {
	unsigned char lamp_state = 0x7F;//0111 1111
	printf("ResetBit: %X -> ", lamp_state);//변경 전
	//lamp_state 변수의 3번 비트를 0으로 설정함
	lamp_state = ResetBit(lamp_state, 3);// 0x77 = 0111 0111
	printf("%X\n", lamp_state);

	//SetBit()
	lamp_state = 0x77; //0111 0111
	printf("SetBit: %X -> ", lamp_state);//변경 전
	//lamp_state 변수의 3번 비트를 0으로 설정함
	lamp_state = SetBit(lamp_state, 3);// 0x77 = 0111 0111
	printf("%X\n", lamp_state);

	//GetBit()-모든 비트의 상태 확인

	lamp_state = 0x75; //0111 0101
	unsigned char bit_state;
	printf("GetBit: %X -> ", lamp_state);

	for (int i = 0; i < 8; i++) {
		bit_state = GetBit(lamp_state, 7 - i);
		printf("%d", bit_state);
		
	}
	printf("\n");

	return 0;
}

unsigned char ResetBit(
	unsigned char dest_data,
	unsigned char bit_num) {
	//dest_data변수의 bit_num번 있는 비트를 
	//0으로 설정하는 함수로 해당 비트가
	//0으로 설정된 값을 반환합니다.
	
	//1바이트 변수라서 비트 이동은 0~7 까지 가능함
	if(bit_num <8)
		dest_data = dest_data & ~(0x01 << bit_num);
		//변경된 값을 반환함
		return dest_data;

		//1100 1110 -> 4째 비트가 0으로 하고 싶으면
		//0000 0001 = 0x01
		//0001 0000 = 0x01 << 4
		//1111 1110 = ~(0x01 << 4)
		//Original: 1100 1110 & 1110 1111 = 1100 1110
	}	
unsigned char SetBit(
	unsigned char dest_data,
	unsigned char bit_num) {
	//dest_data 변수의 bit_num번 있는 비트를
	//1로 설정하는 함수로 해당 비트가
	//1로 설정된 값을 반환합니다.
	if (bit_num < 8)
		dest_data = dest_data | (0x01 << bit_num);
	return dest_data;

}
unsigned char GetBit(
	unsigned char dest_data,
	unsigned char bit_num) {
	//dest_data 변수의 bit_num번 비트 값을
	//반환하는 함수입니다
	unsigned char bit_state = 0;
	if (bit_num < 8) {
	bit_state = dest_data & (0x01 << bit_num);
	bit_state = bit_state >> bit_num;
	}
	return bit_state;

	//Original: 1101 1110
	//0000 0001 << 5
	//	 1101 1110
	// & 0010 0000
	// = 0000 0000 >> 5

}
	
