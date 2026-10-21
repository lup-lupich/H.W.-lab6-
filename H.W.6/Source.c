#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	int x, y;

	printf("Введите координаты x и y\n");
	scanf("%d %d", &x, &y);

	if (((x >= -6 && x <= -1) && (y >= 2 && y <= 7)) || ((x >= -6 && x <= -3) && (y >= -3 && y <= 2))) printf("Точка принадлежит закрашенной области\n");
	else printf("Точка не принадлежит закрашенной области\n");

	return 0;
}