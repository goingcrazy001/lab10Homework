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
	char symbol, symbol1='*';
	int i;
	float a, b, a1, b1,g,r1,r2,r3;
	printf("----------------ДАННЫЕ ПРЯМОУГОЛЬНОГО ТРЕУГОЛЬНИКА----------------\n");
	printf("Введите символ, из которого будет строиться фигура:");
	scanf(" %c", &symbol);
	printf("Введите длину вертикального катета (a): ");
	scanf("%f", &a);
	printf("Введите длину горизонтального катета (b): ");
	scanf("%f", &b);

	do {
		printf("\n------------------------------------------------------------\n");
		printf("                          Меню операций                         \n");
		printf("-------------------------------------------------------------\n");
		printf("1) Рассчитать площадь\n");
		printf("2) Вывести определение фигуры\n");
		printf("3) Нарисовать фигуру символом, заданным пользователем\n");
		printf("4) Нарисовать фигуру символом *\n");
		printf("5) Вывести праметры фигуры\n");
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
			printf("\n\n------- Параметры прямоугольного треугольника ------- \n");
			printf("Символ, из которого будет построен прямоугольный треугольник %c\n", symbol);
			printf("Длина горизонтального катета равна %.2f\n", a);
			printf("Длина вертикального катета равна %.2f\n", b);
			g = sqrt(a * a + b * b);
			printf("Гипотенуза равна %.2lf\n\n", g);
			continue;
		}
		case 6: {
			printf("\n\n------- Введите данные для второго треугольника -------\n");
			printf("Введите длину вертикального катета (a1):");
			scanf("%f", &a1);
			printf("Введите длину горизонтального катета (b1):");
			scanf("%f", &b1);
			r1 = area_triangle(a, b);
			r2 = area_triangle1(a1, b1);
			r3 = r1 - r2;
			printf("Площадь первого прямоугольного треугольника равна %.2f\n", r1);
			printf("Площадь второго прямоугольного треугольника равна %.2f\n", r2);
			if (r3 > 0) {
				printf("Первый треугольник больше чем второй на %.2f\n\n", r3);
			}
			else if (r3 == 0.0) {
				printf("Площади треугольников одинаковы, они равны %.2f\n\n", r1);
			}
			else {
				printf("Второй треугольник больше первого на %.2f\n\n", r2-r1);
			}
		}
		}
	} while (i != 0);

    return 0;
}






float area_triangle(float a, float b) {
	float s = a * b / 2;
	return s;
}


void description() {
	printf("\n\n------- ОПРЕДЕЛЕНИЕ ФИГУРЫ -------\n");
	printf("\nПрямоугольный треугольник — это треугольник, у которого один из углов является прямым, то есть равен 90°.\n");
}

void draw_triangle(char symbol, float a, float b) {

	printf("\n------- Прямоугольный треугольник -------\n");
	for (int y = 1; y <= a; y++) {
		int t = b * y / a;
		for (int i = 0; i < t; i++) {
			printf("%c", symbol);
		}
		printf("\n");
	}

}

void draw_trianglesymbol(char symbol1, float a, float b) {

	printf("\n------- Прямоугольный треугольник -------\n");
	for (int y = 1; y <= a; y++) {
		int t1 = b * y / a;
		for (int i = 0; i < t1; i++) {
			printf("%c", symbol1);
		}
		printf("\n");
	}
}


float area_triangle1(float a1, float b1)
{ 
	float s1 = a1 * b1 / 2;
	return s1;
}
