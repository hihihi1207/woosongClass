#include <stdio.h>

int cashIn = 0;
int cashOut = 0;

void Credit_In(int cashIn);
void Credit_Out(int cashOut);

int main()
{
	int sel_Bank;

	while (1) {
		printf("\n내부 연결 은행(i/I) 아니면 외부 연결 은행(O/o) ");


		sel_Bank = getchar();
		while (getchar() != '\n');

		if (sel_Bank == 'i' || sel_Bank == 'I') {
			printf("내부은행 연결");
			Credit_In(cashIn);

		}
		else if (sel_Bank == 'o' || sel_Bank == 'O') {
			printf("외부은행 연결");
			Credit_Out(cashOut);
		}
		else {
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}

void Credit_In(int cashIn)
{
	static int balance = 0;

	for (int i = 1; i < 4; i++) 
	{
		printf("\n%d회 실행\n", i);
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