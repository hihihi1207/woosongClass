#include <stdio.h>

extern void Credit_out(int cashOut);

void Credit_Out(int cashOut)
{
	static int balance = 0;

	for (int i = 1; i < 4; i++)
	{
		printf("\n%dȸ ����\n", i);
		printf("�ܺ����� ����: \n");
		scanf_s("%d", &cashOut);

		printf("�Ա�\t\t���\t\t�ܾ�\n");

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