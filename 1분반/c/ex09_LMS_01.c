#include <stdio.h>

int cashIn = 0;
int cashOut = 0;

void Credit_In(int cashIn); //내부 은행 함수 선언
void Credit_Out(int cashOut); //외부 은행 함수 선언

int main() //메인 함수
{
	int sel_Bank;

	while (1) {
		printf("\n내부 연결 은행(i/I) 아니면 외부 연결 은행(O/o) ");


		sel_Bank = getchar();
		while (getchar() != '\n');

		if (sel_Bank == 'i' || sel_Bank == 'I') {
			printf("내부은행 연결");
			Credit_In(cashIn); //내부 함수 호출

		}
		else if (sel_Bank == 'o' || sel_Bank == 'O') {
			printf("외부은행 연결");
			Credit_Out(cashOut); //외부 함수 호출
		}
		else {
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}

void Credit_In(int cashIn) //내부 은행 함수
{
	static int balance = 0; //정적 내부 정수형 변수

	for (int i = 1; i < 4; i++)  //3회 실행
	{
		printf("\n%d회 실행\n", i);  //여기서 부터 은행 프로그램
		printf("내부은행 현금: \n");
		scanf_s("%d", &cashIn);

		printf("입금\t\t출금\t\t잔액\n");

		if (cashIn >= 0) {
			printf("%d\t\t\t\t", cashIn);
		}
		else {
			printf("\t\t%d\t\t", -cashIn);
		}

		balance += cashIn;
		printf("%d\n", balance);
	}
}