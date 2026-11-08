# Домашнее задание к работе 10

## Условие задачи

Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. индивидуальное задание работы 9) предлагает меню выбора одной из операций:
1. Рассчитать площадь
2. Вывести определение фигуры
3. Нарисовать фигуру символом, заданным пользователем
4. Нарисовать фигуру символом *
5. Вывести параметры фигуры
6. Сравнить две фигуры по площади

## Алгоритм и блок-схема
### Aлгоритм
1. Начало.
2. Ввести символ для построения перевернутого равнобедренного треугольника.
3. Ввести длины высоты и половины основания треугольника.
4. Вывести меню операций.
5. Ввести номер выбранной операции.
6. Выполнить выбранную операцию:
   - Рассчитать площадь.
   - Вывести определение фигуры.
   - Нарисовать фигуру символом, заданным пользователем.
   - Нарисовать фигуру символом `*`.
   - Вывести параметры фигуры.
   - Сравнить две фигуры по площади.
7. Если выбрана операция сравнения, ввести длины высоты и половины основания второго треугольника и выполнить сравнение площадей.
8. После выполнения операции вернуться к меню операций.
9. Если выбран пункт `0`, завершить программу.
10. Конец.

### Блок-схема

<img width="531" height="887" alt="image" src="https://github.com/user-attachments/assets/325c2995-d5e2-4aba-bed1-18bb41ec859e" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tj5s4EP41kdqTdgXm%2FeNm07Q99U7VbaXrfjo5wZtwC5gD0k3668%2BATcAQAiyQbCFVE2NsA55nnrHHg3cm3Tv7jz70tn9gE9kzIJj7mbSYASBqmkp%2BopwDzRE0OcnZ%2BJZJ844ZD9ZPxArS3J1loiBXMMTYDi0vn7nGrovWYS4P%2Bj5%2ByRd7wnb%2Bqh7coELGwxraxdy%2FLTPc0lwgCMcTn5C12bJLq%2ByMA1lpmhFsoYlfMlnSh5l072McJilnf4%2FsqPtYxyT1lifOpnfmIzesUyEIizVoI0F4YA9M6pC%2BJQfzl60VogcPrqMzL0S%2BJG8bOjY5EkkSBl7S4U%2FWHpFLzIPQx89pL4m3Csl7smz7HtvYJzl21Es3JvSf382AtIw%2FM3Afpe%2Bif%2B%2Bj8tgNl9Cx7Agv3yyHiB4If6IX8v0XdqBLi5Q3KcSfpMkkHTWZPOEPaO%2FoE84WwsxYRN9zYUYeRddYmnzP4%2B8PtBLyQ7TP9BTt2I8IOyj0D6TINiN7WUmqvWSAwtBAWwEGPab6AGgVSGG6SVs%2BCpIkqCzL5Wq5Qh3BEvh5UZKUgraNbLzxoUP6x0M%2B6ecQ%2Bfy5r8cT57DwVkQfHJwVtuNiAkx%2BVvRIpIf012qFAKUEARqHAFYmZcQOIPC4dYLDp90Bb54%2Ff9GcJYK%2Fv9wYSbvILDBcESZ4569pKVMoQCdq4oEeYj%2Fc4g12of3hmDv38c41IxYg2iPNj2W%2BYOxRjPyLwvBACR7uQpxHENpb4XdaPUo%2FRukYR9HRYp85tTiwA5d00%2FfsQaZWdHisFh%2BxeiZ6gjs7%2FAJXyJ7D9fMmvnsGrMQiUOyE0N8g2lfINcsR4CMbhtaPfC93Lk5mEamlgysmnRLtr8IDJ9e4FzhmJ7pF1G2xJu3F2h9pgUVs4h094VimmYgdBdZPeidRz3rYcsP4wZX5TFmQHMvdEhoJv6F9SFtv0Ps8acuUqOuqZqlgaJUb4VY3NOm0sGhzX6NHyhTBT08BCgvSTK9aS8BmLcb2t9hZ7YJfh34JqQpxipSVlq0YVithWJFjWD3PsOlY8jUqSZV%2FGj3FinhHR0nRdzKSUuKRlDrUuEmUlQ6EalZYxFGooTigGkqdSAyMXGJgQInJehcSk0YuMWlAiakCuO1gOmHKI5eZPKDMtC58AKYycokpA0pM78SSqSOXmDqgxAytAx3zVDIFXteSWs4b8otIzhdT0UHy%2F7dZ7DtTbdIL85VPUpso5YNjKZEVE1k50%2FqRFiR2ceGLN1GF5CTp%2F8z5dtAQitAw8tBQgMBBQ%2BvCZJa7bLRZKxccQZrjFVA1oBeOpZt54Y6Ot8fsuW69cKUdnVlPaeIAEoFR4a3jHEC0mqYLt0LmA3JoOi4MsRaTe6eNvMppVA4x6tVr7RVkGH3DbsGsBwLU5o0z2FAESc%2BLtjZSOnUVZrhgZEMFYiGACp3o7mOL0KfPUFE5%2F5LI63EbowDFdvzPVmoHJn%2FXvItWzMnhysbr5yRradmngAP6BEKW89MVzqzm11fqV4kQtBNhesvjlGHbQUFR9uarRJ%2Fhc1nVmtp6SeZYwVBytl9Q%2B7L1UGkHuwst3g6OuqW2lFKrFH%2FKmYN5%2BM8OGQagErelNTCLtn7cMgVXJNOW5oE9wyRT2h%2FSFclUailTaZJpTqZytzKlRplMv0XpQnEbrtwSGvIEjRw0lCtS97ZDLWWSaU6m6vXI9DANtVrItG08ZREL5Z7GcnxkgvoaT%2BoE%2FaxbjvQsPGQKUF%2FkyTmfouXnfJLO1geO2EvaPFGf8yTJcm8O4cM0%2BKxGeanrsmeUn5icNEd5fTcFDzlFLCxpdQi6aXRcH3ScubwkKNQeeWgaFV%2BftT0x%2BeoVcpy7VFP6Y6Fp0H59kNN6GOBJRlMUqoUXrPj4%2Fw5hqLaEoToSGPY8AsuGZHUJOxEYjXGnMKgecVcIxu0OeZ66age9bJf96vCru76cibEYfoWZXLylt%2BJyYWJXQiTDD3FkKZ1aXSriC7S0OVU%2BmeuPMqwdHtaY63Ugdu1D0ri5l2RwOzNw5Q2psvwZj1MhSoF%2FbafvEMTT8Bto94Go7c9uYJmI5sQvVVL8iS1MREU4XIU3PGc7kpjmwCPElu0I9b9dtN9HfEc3T5QO72ZRuCaNdaMFyhiSKxJfmDXI4qajOvGVclHaST13FXhJURZwndzfKyKuGdIzsXWAe3ez4FFV%2Bou4Bi0jrqtceWMmR1nVQFMbeYrNBjOQEx8V%2BMhEwdq3vNDC7rv3vSm6wr8%2F2qOi6x0q%2BmVc01em6Hrj8Ehe0ZX%2BHC1VYpsUvWSHo740nFtU6GJrjXL9brl7UZUvfNT6rYD6MVMn9LvHJaQqsU36XdBvFkrRvYLL%2BZeetKpIu1cpOMNWJwpe%2Fg7buBRcUBt7s3gFT%2F0WAym4Nin4SQNeskWhj%2BA%2FoW9Bd0P6pi8C4CCh9zhZl7qcrIsXma3X0ud0b8OUHB4ztFFOFK044NxUvakfU%2BY9iyzjlCNTFAr7dOVrnHFlytz4UgQ8IyU4KDBSjTuRtGHJjQFyYjfund5%2BiKvgBS%2Bsy3THW13OTcSLTk6aUFJPY5dotV3smrlUHg1M%2B%2BvxkMHzkKQat0bmow9LJdNMqHw%2Fmr4mQTyV8B7s7twcLZf%2BK3ZBeVs7N19uz5hEqQYI8CiXFWW81vu2lG0%2B%2B8b2bel4O2dJUvIRWOeMSk8vCZaLq2WM9BUq%2BpvbHEq6qKIrr1X08gHiW1L0fjZoSjfvuuwGTZUaOr4tm2JA9bZPk8b5p0VR78071fJFpwoOGvEsjyisIRryGRVtOs0rztO0pg6q5jX0RjNJoN2C7Ke0rcFCY6Yl8xLSAjf9zSX1gkezxVySHB7%2FTFiCheOfW5M%2B%2FA8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы
Программа написана на языке C++
```cpp
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
```

## Результаты работы программы
### Вывод меню
```
----------------ДАННЫЕ ПЕРЕВЕРНУТОГО РАВНОБЕДРЕННОГО ТРЕУГОЛЬНИКА----------------
Введите символ, из которого будет строиться фигура:^
Введите длину высоты треугольника (a): 3
Введите длину половины основания (b): 3

-------------------------------------------------------------
                          Меню операций
-------------------------------------------------------------
1) Рассчитать площадь
2) Вывести определение фигуры
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Вывести параметры фигуры
6) Сравнить две фигуры по площади
0) Выйти
Выберите операцию:
```
### Пример вывода операции 1
```
------- Площадь фигуры -------
Площадь заданного треугольника 9,00
```
### Пример вывода операции 3
```
------- Перевернутый равнобедренный треугольник -------
^ ^ ^ ^ ^ ^ ^
  ^ ^ ^ ^ ^
    ^ ^ ^
      ^
```
### Пример вывода операции 6
```
------- Введите данные для второго треугольника -------
Введите длину высоты (a1):2
Введите длину половины основания (b1):2
Площадь первого перевернутого равнобедренного треугольника равна 9,00
Площадь второго перевернутого равнобедренного треугольника равна 4,00
Первый треугольник больше чем второй на 5,00
```
## Информация о разработчике

```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
```
