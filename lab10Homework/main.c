#include <stdio.h>
#include <locale.h>
#include <math.h>
float area_triangle(float a, float b);
void description();
void draw_triangle(char symbol, float a, float b);
void draw_trianglesymbol(char symbol1, float a, float b);
float area_triangle1(float a1, float b1);


int main() {
	setlocale(LC_ALL, "RUS");
	char symbol, symbol1 = '*';
	int y,x,i;
	float a, b, a1, b1, r1, r2, r3;
	printf("----------------ДАННЫЕ ПЕРЕВЕРНУТОГО РАВНОБЕДРЕННОГО ТРЕУГОЛЬНИКА----------------\n");
	printf("Введите символ, из которого будет строиться фигура:");
	scanf(" %c", &symbol);
	printf("Введите длину высоты треугольника (a): ");
	scanf("%f", &a);
	printf("Введите длину половины основания (b): ");
	scanf("%f", &b);

	do {
		printf("\n-------------------------------------------------------------\n");
		printf("                          Меню операций                         \n");
		printf("-------------------------------------------------------------\n");
		printf("1) Рассчитать площадь\n");
		printf("2) Вывести определение фигуры\n");
		printf("3) Нарисовать фигуру символом, заданным пользователем\n");
		printf("4) Нарисовать фигуру символом *\n");
		printf("5) Вывести параметры фигуры\n");
		printf("6) Сравнить две фигуры по площади\n");
		printf("0) Выйти\n");
		printf("Выберите операцию: ");
		scanf("%d", &i);

		switch (i) {
		case 1: {
			printf("\n\n------- Площадь фигуры -------\n");
			printf("Площадь заданного треугольника %.2f\n\n", area_triangle(a, b));
			continue;
		}
		case 2: {
			description();
			continue;
		}
		case 3: {
			draw_triangle(symbol, a, b);
			continue;
		}
		case 4: {
			draw_trianglesymbol(symbol1, a, b);
			continue;
		}
		case 5: {
			printf("\n\n------- Параметры перевернутого равнобедренного треугольника ------- \n");
			printf("Символ, из которого будет построен треугольник %c\n", symbol);
			printf("Длина высоты равна %.2f\n", a);
			printf("Длина половины основания равна %.2f\n", b);
			printf("Площадь: %.2f", area_triangle(a, b));
			continue;
		}
		case 6: {
			printf("\n\n------- Введите данные для второго треугольника -------\n");
			printf("Введите длину высоты (a1):");
			scanf("%f", &a1);
			printf("Введите длину половины основания (b1):");
			scanf("%f", &b1);
			r1 = area_triangle(a, b);
			r2 = area_triangle1(a1, b1);
			r3 = r1 - r2;
			printf("Площадь первого перевернутого равнобедренного треугольника равна %.2f\n", r1);
			printf("Площадь второго перевернутого равнобедренного треугольника равна %.2f\n", r2);
			if (r3 > 0) {
				printf("Первый треугольник больше чем второй на %.2f\n\n", r3);
			}
			else if (r3 == 0.0) {
				printf("Площади треугольников одинаковы, они равны %.2f\n\n", r1);
			}
			else {
				printf("Второй треугольник больше первого на %.2f\n\n", r2 - r1);
			}
		}
		}
	} while (i != 0);

	return 0;
}

float area_triangle(float a, float b) {
	float s = a * b;
	return s;
}


void description() {
	printf("\n\n------- ОПРЕДЕЛЕНИЕ ФИГУРЫ -------\n");
	printf("\nПеревернутый равнобедренный треугольник - это треугольник, у которого две боковые стороны равны, а основание расположено сверху.\n");
}

void draw_triangle(char symbol, float a, float b) {

	printf("\n------- Перевернутый равнобедренный треугольник -------\n");
	for (int y = 0; y <=a; y++) {

		int t = (b * (a - y) + a / 2) / a;

		for (int x = -b; x <= b; x++) {

			if (x >= -t && x <= t) {
				printf("%c ", symbol);
			}
			else {
				printf("  ");
			}
		}

		printf("\n");
	}
}

void draw_trianglesymbol(char symbol1, float a, float b) {

	printf("\n------- Перевернутый равнобедренный треугольник -------\n");
	for (int y = 0; y <= a; y++) {

		int t1 = (b * (a - y) + a / 2) / a;

		for (int x = -b; x <= b; x++) {

			if (x >= -t1 && x <= t1) {
				printf("%c ", symbol1);
			}
			else {
				printf("  ");
			}
		}

		printf("\n");
	}
}


float area_triangle1(float a1, float b1)
{
	float s1 = a1 * b1;
	return s1;
}
