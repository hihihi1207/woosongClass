#include <stdio.h>

int cashIn = 0;
int cashOut = 0;

void Credit_In(int cashIn);
void Credit_Out(int cashOut);

int main()
{
	int sel_Bank;

	while (1) {
		printf("\n���� ���� ����(i/I) �ƴϸ� �ܺ� ���� ����(O/o) ");


		sel_Bank = getchar();
		while (getchar() != '\n');

		if (sel_Bank == 'i' || sel_Bank == 'I') {
			printf("�������� ����");
			Credit_In(cashIn);

		}
		else if (sel_Bank == 'o' || sel_Bank == 'O') {
			printf("�ܺ����� ����");
			Credit_Out(cashOut);
		}
		else {
			printf("���α׷��� �����մϴ�.\n");
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
		printf("\n%dȸ ����\n", i);
		printf("�������� ����: \n");
		scanf_s("%d", &cashIn);

		printf("�Ա�\t\t���\t\t�ܾ�\n");

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