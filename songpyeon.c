//반복문, break, continue 예시
#include <stdio.h>
int main(void) {
	int riceCakes = 0; //camelcase 낙타 케이스
	int total_rice_cakes = 0; // snake_case 뱀 케이스
	int userinput;

	//배가 터질 때까지 송편을 챙겨와
	while (total_rice_cakes < 10) {
		printf("지금: %d 송편\n", total_rice_cakes);
		printf("몇 개 더 먹을래? (1-5) : ");
		scanf_s("%d", &riceCakes);

		//1개 이하나 5개 이상이면 오류발생
		if (riceCakes > 5) {
			printf("1-5만 한꺼번에 먹을 수 있어서 다시 시도해 보세요\n");
			continue; //while문 처음부터 다시 시작
		}
		total_rice_cakes += riceCakes;
		//계속 하고싶을 do-while
		do {
			printf("지금: %d 송편. 계속합니까?\n", total_rice_cakes);
			printf("0:종료, 1:계속 >>>");
			scanf_s("%d", &userinput);
			//잘못 입력하면 오류 발생
			if (userinput != 1 && userinput != 0) {
				printf("잘못 입력 다시시도해주세요.\n");
			}
		} while (userinput != 1 && userinput !=0);
		if (userinput == 0) {
			printf("종료하겠습니다...");
			break;
		}
	}
	printf("게임오버: 지금 %d 송편 \n", total_rice_cakes);

	if (total_rice_cakes >= 10) {
		printf("맛있게 드십시오 추석 잘 보내세요\n");

	}
	else {
		printf("충분하지 않을텐데.... 배고플텐데요....ㅠㅠ\n");
	}
	
	return 0;
}