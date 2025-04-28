#include <stdio.h>
void Onefun();      //함수 선언
void Twofun(int a, int b);
float Threefun(int a, int b);
float Fourfun(int* a, int* b);
int main(void) { 
	int a = 5, b = 3;
	Onefun();
	Twofun(a, b);
	float f1 = Threefun(a, b);
	printf("Threefun result : %6.3f \n", f1);
	float f2 = Fourfun(&a, &b);
	printf("Fourfun result : %6.3f\n", f2);
}

void Onefun() { // 구구단 함수
	for (int i = 2; i <= 9; i++)
	{
		printf("%d 단 \n", i);
		for (int c = 1; c <=9; c++)
		{
			printf("%d x %d = %d\n", i, c, i * c);
		}
	}
}

void Twofun(int a, int b) { //지정 구구단 함수
	int start = (a < b) ? a : b;
	int end = (a > b) ? a : b;

	for (int i = start; i <= end; i++) {
		for (int j = start; j <= end; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}

float Threefun(int a, int b) { //강제 자료형 변환 함수
	return (float)a / b;
}
 
float Fourfun(int* a, int* b) { //포인터 강제 자료형 변환 함수
	return (float)(*a) / (*b);
}
