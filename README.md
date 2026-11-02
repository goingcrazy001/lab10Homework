# Домашнее задание к работе 10

## Условие задачи

Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. индивидуальное задание работы 9) предлагает меню выбора одной из операций:
1. Рассчитать площадь;
2. Вывести определение фигуры;
3. Нарисовать фигуру символом, заданным пользователем
4. Нарисовать фигуру символом *
5. Вывести параметры фигуры
6. Сравнить две фигуры по площади

## Алгоритм и блок-схема
### Aлгоритм
1. Начало.
2. Ввести символ для построения прямоугольного треугольника.
3. Ввести длины вертикального и горизонтального катетов.
4. Вывести меню операций.
5. Ввести номер выбранной операции.
6. Выполнить выбранную операцию:
   - Рассчитать площадь.
   - Вывести определение фигуры.
   - Нарисовать фигуру символом, заданным пользователем.
   - Нарисовать фигуру символом `*`.
   - Вывести параметры фигуры.
   - Сравнить две фигуры по площади.
7. Если выбрана операция сравнения, ввести длины катетов второго прямоугольного треугольника и выполнить сравнение площадей.
8. После выполнения операции вернуться к меню операций.
9. Если выбран пункт `0`, завершить программу.
10. Конец.

### Блок-схема

<img width="522" height="838" alt="image" src="https://github.com/user-attachments/assets/9f5168ef-6eec-443a-bfcb-e54f0d4e02ca" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=triangle_flowchart_classic.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tc5s4EP41nmlvJhkQ7x%2BTOG5707vpNJm55iM2is0FkA%2Fjxu6vPwkkDAJjUAA7BXdqIyEJ0PPsrrRalIly5%2B8%2BhfZ69RdyoDcBkrObKNMJAEBWdfxDcvZJjgwsM8lZhq5D8w4ZD%2B4vSDMlmrt1HbjJFYwQ8iJ3nc9coCCAiyiXZ4ches0Xe0Ze%2FqprewkLGQ8L2yvm%2FuM60Yo9hiQdTnyG7nLFLq2zM77NStOMzcp20GsmS7mfKHchQlFy5O%2FuoEe6j3VMUm925Gx6ZyEMojoVNlGxBm1kE%2B3ZA%2BM6uG9x4vZ15UbwYW0vyJlXjC%2FOW0W%2Bh1MyPrQ366TDn90dxJe43UQhekl7Sb7WcN6z63l3yEMhzvFIL105dvjyYQKUWfyZgDtyfEP%2BfSTlURDNbN%2F1CF8eXR9DD6S%2F4Sv%2B%2Fo58O6BFypuU4k%2FSZHJMmkye8KftbekTPjzefH%2BkuTCM4C7TFbTnPkHkwyjc4yKrDLiqllR7zTCBwc0ob9E0JTygVWzKw2Xa8gEpfEDBKgfODaQ6yGF%2BrckhLmV7HvTQMrR93AFrGOKOjGDIn%2Ft2OHEK7PeC7Wbvz5EXF5Ps5GdOUzJN0l9XiAFaCQMMjgGsDFN5UgsUeFr5m%2F3n7R4tX758NfwZtP98vbKSdqFTUGFFmqBtuKClHKlAHdLEA02iMFqhJQps7%2F6QexuibeAQMZ9KOHUo8xWhNeXIvzCK9lSD29sI5RkEd270g1Ynx0%2FkOOYRSU13mVPTPUsEuJt%2BZBOZWiR5qBanWD0HPttbL%2Fpqz6F3ay9elvHdM2IlKp9yJ7LDJaR9BQOnnAEh9OzI%2FZnv5dbhZCaPmjJ7ztApkf4qPnC4xr3AqW4sW1jcpgvcXiz9RApcbPRu6AnfdZwEdrhxf9E7IT27Rm4QxQ%2Bu3U60Kc5xgxVWI9Ej3EW09Qa9n5HcCW7fUsn3rVRbNEuBoVWupGvTMpTjYNHmvpFHyhRBz88bGBXQTK9aC2CnlsYOV8ifbze%2Fj%2FrFSlWKj3BZZSakYY0SDStzGtbMa9h0sPgWkaTCPw6PYkG8iQXxPv6ext%2FaBD%2BWqfc1bpJVrQVQnQqLOAgxlHsUQ6UVxMDAEQM9IqaabSCmDBwxpUfEdAlctzCdcNSBY6b2iJnRhg%2FA0QaOmNYjYmYrlkwfOGJ6j4hZRgsyttbxFHhRC7WcN%2BQ3QS6UU%2Bhs%2FP%2BPSew7k0j3kWEJ0D3cH7fzEB8tyVEIDuVlVkEu1nDcn2kVbCunoXwVpidx2cx5MbpIRbpYebpoQOLoYrRhRsvdOMZEyC2H2eevC0zr0TPHjpt55g7OuKfsuXY9c6UdnVlEaeIUkoFV4cHjnEK0mmFK11LmA3JsOqwGsRaTe6eNvMmRVE4x6ukT9hQyjr5jV2HWKwFq640T3NAkxcxDW5sprboPM7pgYMOH2EJ06TzUdM7RJPPCK2IJbFlM6bM12Z41fuDckLVxnJx7aPGSZM1c7xhbQJfoZxV9utSZFff6kvwmCIEYhOktDxND0ZFAEXvnTdBnlLiqG00NvKJyWsHScgZf0rsy8LYmRrszreL2zrqZMVNSUxR%2FyjUHc%2FWfHCf0oEoCQWvgFA38sDEFF4SpoHlgzzBiSvtDuSBMFUFMlRHTHKZqu5hSo4zn3LJypgCOQBWkhjpSI0cN7YLEXXSopY2Y5jDVLwfT%2FTjUEsBUNLCyyIVy92I5PzLRfY0ndZJ50heHe9beZwpQB%2BTROZ9m5Od8iskWBQ7cS9o8Up%2FzJKlqZ17g%2FTj4rGZ5qb%2ByY5YfmZw0Z3l9NwVPOU0urGO1SLpxdFyfdJy5PCcp9A710Dgqvjxre2Ty1SnlOHepoXWnhcZB%2B%2BVRzuhggKdYTVmoF9604l8EaJGGuiAN9YHQsOMRWDY2q03aycBqzDuNUfXAu0JUbnvMW%2BtzMeplu%2Bx3p1%2Fd9eVMYEX%2FK8z44oLeivPFhl2IIul%2FiKMq6dTqXGFeQNDmVPlkLj%2B0sHZMWGNdbwK5bR%2BSwc29FIvbg4ErbymV5U94nApRCvz7O13HHR6nX0%2FbEJC2vwQb14E0J367kvJPFjARFTFwFd7wnO1IApk3a6zYsh2h%2F7clO3vEd3T1TNXhzYTEaOq2Tx6MFijTkFyR%2BMKsQRYsTerEV6oK18bJ5M7eEGDNOJ6JqgPc65sFX6rWXYA1EAywrnLiDVktqroBmlrHY3qsN9M4aqKCJnLgZhG668hFwYePnQm6xr9C2qGgmy0K%2Bnmc0hcm6GbjwEhe0LXuXCxVsI2CXrLJUVcSzi0ntLG7Rrl8C25gVOUFH7R8a6B%2BtNQR%2Be5w8agKtlG%2BC%2FLNgijaF3A1%2F46TURVj9yYBZ9xqRcDLX1kbloBLemM%2FFi%2FgqceiJwE3RgE%2FasCLuxQuOxN6jgZmhxN0pc0JunyWGXotGU63NEwVwlNGVZQrByG5PzU9b%2Bq1VHk%2FIss45raUpcL2XPkaJxyXKjemlAGvhRIeFLRQjTtRjH4VGiPkqNG4vSO6UVwFn3dhFaY9vdXmfEQ%2B64SkiUrqaLxC1tbltjWXzrOBSX89PWTxekjRrWsr8zH7VSXj7Kd0B4DOJj68KuG91u25NgQX%2Bis2OnlfGzafb1uYRKh6COcox4pqPOGtWcr2nH1nW7O0vIuzomj5eKtTRqWjVwLL4RKMiL5AQX93%2Bz8pZxV07a2CXj5AfE%2BC3s0eTOn%2BXOfdg6lSQoe3KxOLSInDSLrcoMng3NOybHbmqBJ8w6lCHQ14wodl15It9YS0Np3xFadsRlNfVfMaZqNJJTCuQfZT2lZvkTHjinmJ%2FgJX3XmozIJzU2BaiZOHvwSWcOHwF9WU%2B%2F8B%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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

```

## 3. Результаты работы программы
### Вывод меню
```
----------------ДАННЫЕ ПРЯМОУГОЛЬНОГО ТРЕУГОЛЬНИКА----------------
Введите символ, из которого будет строиться фигура:^
Введите длину вертикального катета (a): 7
Введите длину горизонтального катета (b): 6

------------------------------------------------------------
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
Площадь заданного треугольника 6,00
```
### Пример вывода операции 3
```
------- Прямоугольный треугольник -------

^
^^
^^^
^^^^
^^^^^
^^^^^^
```
### Пример вывода операции 6
```
------- Введите данные для второго треугольника -------
Введите длину вертикального катета (a1):4
Введите длину горизонтального катета (b1):3
Площадь первого прямоугольного треугольника равна 21,00
Площадь второго прямоугольного треугольника равна 6,00
Первый треугольник больше чем второй на 15,00
```
## Информация о разработчике

```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 3
```
