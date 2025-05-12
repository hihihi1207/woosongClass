#include <stdio.h>

extern void Credit_out(int cashOut);

void Credit_Out(int cashOut)
{
	static int balance = 0;

	for (int i = 1; i < 4; i++)
	{
		printf("\n%d회 실행\n", i);
		printf("외부은행 현금: \n");
		scanf_s("%d", &cashOut);

		printf("입금\t\t출금\t\t잔액\n");

		if (cashOut >= 0) {
			printf("%d\t\t\t\t", cashOut);
		}
		else {
			printf("\t\t%d\t\t", -cashOut);
		}

		balance += cashOut;
		printf("%d\n", balance);
	}
}