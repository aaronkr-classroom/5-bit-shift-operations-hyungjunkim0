#include <stdio.h>

void printMenu(void);

int main(void) {
	int audience; //시청자
	int choice; //사용자의 선택
	
	printf("== K-POP Concert Game == \n");
	printf("기본 관객 수를 입력하세요: ");
	scanf_s("%d", &audience);
	
	while(1){ //무한 루프
		printf("\n현재 관객 수 : %d\n", audience);
		printMenu();
		scanf_s("%d", &choice);

		switch(choice) {
		case 1: audience = audience << 1;
			printf("(!) 홍보 대성공! 관객이 2배로 증가!\n");
			break;
		case 2: audience = audience << 2;
			printf("(!!) 바이럴 영상 효과! 관객이 4배로 증가!\n");
			break;
		case 3: audience = audience << 3;
			printf("(!!!) 슈퍼스타 등장! 관객이 8배로 증가!\n");
			break;
		case 4: audience = audience >> 1;
			printf("(ㅠ) 일부 티켓 매진! 관객이 1/2 감소\n");
			break;
		case 5: audience = audience >> 2;
			printf("(ㅠㅠ) 제한 조치로 관객이 1/4 감소\n");
			break;
		case 6: audience = audience >> 3;
			printf("(ㅠㅠㅠ) 조기 종료! 관객이 1/8 감소\n");
			break;
		case 7:
			printf("(GAME_OVER) 콘서트 종료! 최종 관객수: %d\n", audience);
			return 0;
		default:
			printf("(X) 잘못된 입력입니다.!\n");
		}
	}
	
	
}

void printMenu(void) {
	printf("1. 관객 2배(<<1)\n");
	printf("2. 관객 4배(<<2)\n");
	printf("3. 관객 8배(<<3)\n");

	printf("4. 관객 1/2배(>>1)\n");
	printf("5. 관객 1/4배(>>2)\n");
	printf("6. 관객 1/8배(>>3)\n");

	printf("7. 콘서트 종료\n");
	printf("선택: (1-7): ");

}