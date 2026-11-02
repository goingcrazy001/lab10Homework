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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=dg&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tc5s4EP41nmlvJhmQeP2YxHHbm95Np8nMNR%2BxUWwugHwYN3Z%2F%2FUkgYRAYAwHsFNypjYQkQM%2Bzu9JqUSbwztt9Cqz16i9sI3cCJHs3gdMJALIEJfJDc%2FZxjgZgnLEMHJsVOmQ8OL8Qr8lyt46NNpmCIcZu6KyzmQvs%2B2gRZvKsIMCv2WLP2M1edW0tUS7jYWG5%2Bdx%2FHDtcsVwgSYcTn5GzXPFLa%2FyMZ%2FHSLGOzsmz8msqC9xN4F2Acxkfe7g65tPd4x8T1ZkfOJncWID%2BsUmET5muwRjbhnj8wqUP6liRuX1dOiB7W1oKeeSXwkrxV6LkkJZNDa7OOO%2FzZ2SFyidtNGOCXpJfka5XkPTuue4ddHJAcl%2FbSlW0FLx8mAM6izwTc0eMb%2Bu8jLY%2F9cGZ5jkvp8uh4BHog%2FY1eyfd37Fk%2BK1LcpBR94ibjY9pk%2FIQ%2FLXfLnvDh8eb7I8tFQYh2qa5gPfcJYQ%2BFwZ4UWaXAVdS42muKCRxu1gowWZrxHbAqFuPhMmn5gBQ5YGAVA%2Bf4UhXkCL%2FW9JCUslwXuXgZWB7pgDUKSEeGKBDPfTucOAX2e8F2s%2Ffm2I2KSVb8M2cpmSXZr9OIAWoBA3SBAbzMnjOkBQo8rbzN%2FvN2j5cvX77q3gxZf75emXG7yM6psDxN8DZYsFK2lKMObeKBJXEQrvAS%2B5Z7f8i9DfDWt6mYTyWSOpT5ivGaceRfFIZ7psGtbYizDEI7J%2FzBqtPjJ3oc8YimprvUqemeJ3zSTT%2FSiVQtmjxUi1K8no2era0bfrXmyL21Fi%2FL6O45sWKVz7gTWsESsb5Cvl3MgAC5Vuj8zPZy63Byk8dMmTXn6BRIfxkfBFyjXhBUN5EtIm7TBWkvkn4qBQ4xejfshOfYdgw72ji%2F2J3Qnl1jxw%2BjB1dvJ%2BqU5Dj%2BiqiR8BHtQtZ6jd5PSe6EtG8q9PtWqiyahcCwKlfStWHq8DhYrLlv9JFSRfDz8waFOTSTq1YC2K6ksYMV9ubbze%2BjfolSlaIjUhbOGmlYvUDDyoKGNbIaNhksvkUkmfCPw6NIEG8iQbyPvqfRtzohj2VofY2bZEVtAVS7xCIOQgzlHsUQtoIYGDhioEfEFKMNxODAEYM9IqZJ4LqF6YStDBwzpUfM9DZ8ALY6cMTUHhEzWrFk2sAR03pEzNRbkLG1RqbAi0qoZbwhvwlygZxAZ5H%2Ff0wi35lEu48OS4Dmkv64nQfkaEmPAnAoL%2FMKcr6G7fxMqhBbOQ3kqyA5Scqmzjeji5Sni5mliwokgS56G2a02I2jTxq55Qj7vHWOaT165vhxPc%2FcwRn3lD7XrmeusKNTiyh1nEIyMEs8eIJTiFXTDelaSn1Ahk2H1SDeYnzvrJE3OZKKKcY8fY09hZyj79hVmPZKgMp64wQ3VAkaWWgrM6VV92FKFwxs%2BBBZiC6dh6omOJpkUXibWAJLbqb0%2BZpszxrft2%2Fo2jhJzl28eImzZo57jC2gS%2FTTij5Z6kyLe3VJfhOEoBmEyS0PE8OmI4E89vaboE8pcUXT6xp4qAhawVQzBl%2FSujLwltqMdmdaxe2ddTN9BhNTFH2KNQd39Z8cJ%2FSgSvyG1sDOG%2FhhYwouCNOG5oE%2Fw4gp6w94QZjChpjCEdMMpkq7mDKjTObcMjxTAIevNKSGMlIjQw31gsS96VBLHTHNYKpdDqb7cajVANOmgZV5LhS7F4v5kYruqz2pk4yTvjjSs9Y%2BVYA5II%2FO%2BVQ9O%2BeDBl8UOHAvbvNIfcGTpCideYH34%2BCznOWF%2FsqOWX5kclKf5dXdFCLlVDm3jtUi6cbRcXXSCebynKTQOtRD46j48qztkclXp5QT3KW62p0WGgftl0c5vYMBHjTrslDLvWklvgjQIg21hjTUBkLDjkdg6disNmknA7M271RO1QPvclG57TFvrc2bUS%2FdZb87%2FaquL6cCK%2FpfYSYXb%2BitOF9s2IUokv6HOApMplbnCvMCDW1OmU%2Fm8kMLK8eE1db1BpDb9iHpwtwLmsIeDEJ5E5aWP%2BFxykUpiO%2FvdB13eJx%2BPW1DQNv%2B4m8cG7Gc6O1Kxj%2B5gYkoiYEr8YZnbEccyLxZE8WW7gjtvy3d2SO6o6tnpg5vJjRGU7M8%2BmCsQJGGFIpEF%2BYN8mBpWie6Ulm4NknGd%2FaGAGvO8VRUHRBe38z5UtXuAqxBwwDrMifekNWioumgrnU8psd6M42jJsppIhttFoGzDh3sf%2FjYmaCr4iukHQq60aKgn8cpfWGCbtQOjBQFXe3OxVIG2yjoBZscdSXhwnJCG7trFMt3ww2Myrzgg5ZvFVSPljoi3x0uHpXBNsp3Tr55EEX7Aq5k33HSy2Ls3iTgnFutCHjxK2vDEnBJq%2B3HEgU88Vj0JOD6KOBHDXh%2Bl8JlZ0Iv0MDocIIO25ygy2eZoVeS4WRLw0QhPKVURbFyaCT3p6bndb2WiuhH5BnH3JaylNueK1vjhONSEcaUMhC1UMyDnBaqcCdQ71ehcUKOGk3YO6IbxZXzeedWYdrTW23OR%2BSzTkjqqKSOxit0bV1uW3NpIhu49FfTQ6aoh6BmXpupj9GvKhlnP4U7AHQ28RFViei1bs%2B10XChv2Sjk%2Fe1YfP5toWJhaqHcI5irJjGa7w1S9Ges%2B9sa5aWd3GGUM3GW50yKh29ElgMV8OI6AsU9He3%2FxM8q6CrbxX04gHiexL0bvZgSvbnOu8eTKUSOrxdmXhEShRG0uUGTbrgnpZlozNHVcM3nErU0YAnfER2TdlUTkhr3Rlffsqm1%2FVV1a9h1JpUAv0apD%2BFbfUWGTOumBfoL3DVnYfKyDk3G0wrSfLwl8BiLhz%2BoBq8%2Fx8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
