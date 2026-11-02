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

<img width="534" height="859" alt="image" src="https://github.com/user-attachments/assets/54743cbf-cdb2-427c-8199-2fd2d7d8ca6d" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tc5s4EP41nundTDIg8foxjuO2N72bzqUz13zERrG5APJh3Nj99SeBhEFgDASwU3CnNhKSAD3P7kqrRZnAe2%2F%2FMbA26z%2BxjdwJkOz9BM4mAMgSlMgPzTnEORqAccYqcGxW6Jjx6PxEvCbL3Tk22mYKhhi7obPJZi6x76NlmMmzggC%2FZos9Yzd71Y21QrmMx6Xl5nP%2FcexwzXKBJB1PfELOas0vrfEznsVLs4zt2rLxayoLPkzgfYBxGB95%2B3vk0t7jHRPXm584m9xZgPywSoVtmK%2FBGtmGB%2F7ApA7pW5KYvq6dED1urCU980rgJXnr0HNJSiaH1nYTd%2Fizs0fkEtNtGOCXpJfkW5XkPTuue49dHJAcl%2FbSjW0FLx8mAM6jzwTc0%2BM7%2Bu83Wh774dzyHJfS5ZvjEeiB9Bd6Jd9%2FY8%2FyWZHiJqXoEzcZH9Mm4yf8Ybk79oSTmTQxZ%2FR7Kk3Ioxg6Pybf0%2Bj7gVVCQYj2qZ5iHfsRYQ%2BFwYEUWaewV9S42muKKJwNrBVgsjQTB8CqWIymq6TlI5DkgGFZjKvjS1WAJfTb0ENSynJd5OJVYHmkfzYoIP0cokA89%2FV44hwX3gv024O3wG5UTLLinwVLySzJfp1GDFALGKALDOBlDpwhLVDgae1tD592B7x6%2BfxF9%2BbI%2BuP1xozbRXZOw%2BVpgnfBkpWypRx1aBOPLImDcI1X2Lfch2PuNMA736ZagEgPnB7LfMF4wzjyLwrDA1Pw1i7EWQahvRN%2BZ9Xp8RM9jnhEU7N96tTswBM%2B6abv6USqFk0eq0UpXs9Gz9bODb9YC%2BROreXLKrp7TqzYIjDuhFawQqyvkG8XMyBArhU6P7K93Dqc3CIyS2ctODoF0l%2FGBwHXqBcEzU5ki4jbbEnai6SfSoFDbOIdO%2BE5th3DjrbOT3YntGc32PHD6MHV6USdkRzHXxM1En5D%2B5C1XqP3RaWtMEVdVTQLgWFVbqRbw9ThabBYc1%2FpI6WK4OfnLQpzaCZXrQSwXUljB2vsLXbbX0f9EqUqRUekLJw30rB6gYaVBQ1rZDVsMpZ8i0gy4R9HT5Eg3rFREv2OR1JqNJLS%2Bho3yYraAqh2iUUchBjKPYohbAUxMHDEQI%2BIKUYbiMGBIwZ7REyTwG0L0wlbGThmSo%2BY6W34AGx14IipPSJmtGLJtIEjpvWImKm3IGMbjUyBl5VQy3hDfhHkAjmBziL%2Ff59EvjOJdh8dlgDNJf0xXQTkaEWPAnAsL%2FMKcr6G7fxIqhBbOQvkmyA5Scqmzjeji5Sni5mliwokgS56G2a02I2jTxq55Qj7vE2OaT165vhxPc%2Fc0Rn3lD7XrmeusKNTayx1nEIyMEs8eIJTiFXTDelWSn1Ahk3HxSLeYnzvrJE3OZKKKcY8fY09hZyj79hVmPZKgMp64ww3VAkaWWgrM6VV92FKFwxs%2BBBZiC6dh6omOJpkUXibWAJLbqb0%2BZJtzxrft%2B%2Fo0jlJLly8fImz5o57ii2gS%2FTTij5Z6kyLe3VJfhOEoBmEyS0PE8OmI4E89vaboE8pcUXT6xp4qAhawVQzBl%2FSujLwltqMdhdaxe2ddXN9DhNTFH2KNQd39Z8dJ%2FSgSvyG1sDOG%2FhhYwquCNOG5oE%2Fw4gp6w94RZjChpjCEdMMpkq7mDKjTObcMrxQAIevNKSGMlIjQw31isS96VBLHTHNYKpdD6aHcajVANOmgZV5LhS7F4v5kYruqz2pk4yzvjjSs9YhVYA5IE%2FO%2BVQ9O%2BeDBl8UOHIvbvNEfcGTpCideYEP4%2BCznOWF%2FsqOWX5iclKf5dXdFCLlVDm3jtUi6cbRcXXSCebykqTQOtRD46j4%2BqzticlXp5QT3KW62p0WGgft10c5vYMBHjTrslDLvWklvgjQIg21hjTUBkLDjkdg6disNmknA7M271RO1SPvclG57TFvoy2aUS%2FdZb86%2FaquL6cCK%2FpfYSYXb%2BituFxs2JUokv6HOApMplaXCvMCDW1OmU%2Fm%2BkMLK8eE1db1BpDb9iHpwtwLmsIWDUJ5E5aWP%2BNxykUpiO%2FvdB13eJp%2BPW1DQNv%2B7G8dG7Gc6O1Kxj%2B5gYkoiYEr8YZnbEccyLzdEMWW7gjtvx3d%2BCO6o5tnpg7vJjRGU7M8%2BmCsQJGGFIpEF%2BYN8mBpWie6Ulm4NknGd%2FaGAGvO8VRUHRBe38z5UtXuAqxBwwDrMifekNWioumgrnU8pcd6M42jJsppIhttl4GzCR3sf%2FitM0FXxVdIOxR0o0VBv4xT%2BsoE3agdGCkKutqdi6UMtlHQCzY56krCheWENnbXKJbvhhsYlXnBBy3fKqgeLXVCvjtcPCqDbZTvnHzzIIr2BVzJvuOkl8XYvUnAObdaEfDiV9aGJeCSVtuPJQp44rHoScD1UcBPGvD8LoWrzoReoIHR4QQdtjlBly8yQ68kw8mWholCeEqpimLl0Ejuz03P63otFdGPyDNOuS1lKbc9V7bGGcelIowpZSBqoZgHOS1U4U6g3q9C44QcNZqwd0Q3iivn886twrSnt9qcj8gXnZDUUUkdjVfo2rrctubSRDZw6a%2Bmh0xRD0HNvDVTH6NfVTLOfgp3AOhs4iOqEtFr3Z5ro%2BFCf8lGJ%2B9rw%2BbLbQsTC1UP4RzFWDGN13hrlqI9Z9%2FZ1iwt7%2BIMoZqNtzpnVDp6JbAYroYR0Vco6O9u%2Fyd4UUFX3yroxQPE9yTo3ezBlOzPddk9mEoldHi7MvGIlCiMpMsNmnTBPS3LRmeOqoZvOJWoowFP%2BIjsmrKpnJHWujO%2B%2FJRNr%2Burql%2FDqDWpBPotSH8K2%2BotMmZcMS%2FQX%2BCmOw%2BVkXNuNphWkuTxD4XFXDj%2BvTX48D8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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

## Результаты работы программы
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
