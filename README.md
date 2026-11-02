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

<img width="532" height="888" alt="image" src="https://github.com/user-attachments/assets/9508b938-3871-443c-bf5d-20bb8aebcad9" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22universal-triangle%22%20name%3D%22Page-1%22%3E7V1tc5s4EP41nundTDIg8foxjuO2N72bzqUz13zERrG5APJh3Nj99SeBhEFgDASwU3AmDhKSAD3P7kqrRZnAe2%2F%2FMbA26z%2BxjdwJkOz9BM4mAOiySr5pxiHOUCCMM1aBY8dZ8jHj0fmJWKbEcneOjbaZgiHGbuhssplL7PtoGWbyrCDAr9liz9jNXnVjrVAu43Fpufncfxw7XLNcIEnHE5%2BQs1rzS2v8jGfx0ixju7Zs%2FJrKgg8TeB9gHMZH3v4eubTzeMfE9eYnziZ3FiA%2FrFJhG%2BZrsEa24YE%2FMKlD%2BpYkpq9rJ0SPG2tJz7wSdEneOvRckpLJobXdxB3%2B7OwRucR0Gwb4Jekl%2BVYlec%2BO695jFwckx6W9dGNbwcuHCYDz6DMB9%2FT4jv78RstjP5xbnuNSunxzPAI9kP5Cr%2BT7b%2BxZPitS3KQUfeIm42PaZPyEPyx3x55wMpMm5ox%2BT6UJeRRD58fkexp9P7BKKAjRPtVTrGM%2FIuyhMDiQIusU9grj%2BmuKKJwNrBVgsjQTB8CqWIymq6TlI5DkgGFZjKvjS1WAJfTb0ENSynJd5OJVYHmkfzYoIP0cokA89%2FV44hwX3gv024O3wG5UTLLiPwuWklmS%2FXUaMUAtYIAuMICXOXCGtECBp7W3PXzaHfDq5fMX3Zsj64%2FXGzNuF9k5DZenCd4FS1bKlnLUoU08siQOwjVeYd9yH4650wDvfJtqASI9cHos8wXjDePIvygMD0zBW7sQZxmE9k74nVWnx0%2F0OOIRTc32qVOzA0%2F4pJu%2BpxOpWjR5rBaleD0bPVs7N%2FxiLZA7tZYvq%2BjuObFii8C4E1rBCrG%2BQr5dzIAAuVbo%2FMj2cutwcovILJ214OgUSH8ZHwRco14QNDuRLSJusyVpL5J%2BKgUOsYl37ITn2HYMO9o6P9md0J7dYMcPowdXpxN1RnIcf03USPgN7UPWeo3eF5W2whR1VdEsBIZVuZFuDVOHp8FizX2lj5Qqgp%2BftyjMoZlctRLAdiWNHayxt9htfx31S5SqFB2RsnDeSMPqBRpWFjSskdWwyVjyLSLJhH8cPUWCeMdGSfQ7Hkmp0UhK62vcJCtqC6DaJRZxEGIo9yiGsBXEwMARAz0iphhtIAYHjhjsETFNArctTCdsZeCYKT1iprfhA7DVgSOm9oiY0Yol0waOmNYjYqbegoxtNDIFXlZCLeMN%2BUWQC%2BQEOov8%2Fj6JfGcS7T46LAGaS%2FpjugjI0YoeBeBYXuYV5HwN2%2FmRVCG2chbIN0FykpRNnW9GFylPFzNLFxVIAl30NsxosRtHnzRyyxH2eZsc03r0zPHjep65ozPuKX2uXc9cYUen1ljqOIVkYJZ48ASnEF%2FlMqRbKfUBGTYdF4t4i%2FG9s0be5Egqphjz9DX2FHKOvmNXYdorASrrjTPcUCVoZKGtzJRW3YcpXTCw4QOxEECzPHr3kUXo0o%2BoaoLPSRbluIlRsORm%2Bp%2Bv3vas%2FH37jq6ik%2BTCxcuXOGvuuKeIA7okQlrnJ6ueacmvLtRvghA0gzC55WFi2HRQkMfefhP0KX2uaHpdWw8VQSuYasb2S1pXtt5Sm9HuQgu6vbNurs9hYpWiT7Hm4F7%2Fs0OGHlSJ39Aa2HlbP2xMwRVh2tA88GcYMWX9Aa8IU9gQUzhimsFUaRdTZpTJ9FuGF4rl8JWG1FBGamSooV6RuDcdaqkjphlMtevB9DAOtRpg2jTGMs%2BFYk9jMT9SgX61J3WScdYtR3rWOqQKMF%2FkyTmfqmfnfNDg6wNH7sVtnqgveJIUpTOH8GEcfJazvNB12THLT0xO6rO8uptCpJwq55a0WiTdODquTjrBXF6SFFqHemgcFV%2BftT0x%2BeqUcoK7VFe700LjoP36KKd3MMCDZl0WarmXrsR3AlqkodaQhtpAaNjxCCwdptUm7WRg1uadyql65F0uQLc95m20RTPqpbvsV6df1fXlVIxF%2FyvM5OINvRWXCxO7EkXS%2FxBHgcnU6lIRX6ChzSnzyVx%2FlGHl8LDaut4Acts%2BJF2Ye0FT2K1BKG%2FC0vJnPE65KAXxVZ6uQxBP06%2BnHQlo25%2F9rWMjlhO9aMn4JzcwESXhcCXe8IztiGOatxui2NIdof23o3uARHd088zU4d2EhmuyWDdWoEhDCkWiC%2FMGedw0rRNdqSxymyTjO3tDrDXneCqqDghvcuZ8qWp3sdagYax1mRNvyGpR0XRQ1zqe0mO9mcZRE%2BU0kY22y8DZhA72P%2FzWmaCr4tukHQq60aKgX8YpfWWCbtQOjBQFXe3OxVIG2yjoBfsddSXhwnJCGxttFMt3w72Myrzgg5ZvFVSPljoh3x0uHpXBNsp3Tr55EEX7Aq5kX3fSy2Ls3iTgnFutCHjx22vDEnBJq%2B3HEgU88Vj0JOD6KOAnDXh%2Bw8JVZ0Iv0MDocIIO25ygyxeZoVeS4WR3w0QhPKVURbFyaCT356bndb2WiuhH5Bmn3JaylNupK1vjjONSEcaUMhC1UMyDnBaqcCdQ71ehcUKOGk14g7cbxZXzeedWYdrTW23OR%2BSLTkjqqKSOxit0bV1uW3NpIhu49FfTQ6aoh6Bm3pqpj9GvKhlnP8U70nQ18RFViei1bs%2B10XChv2TPk%2Fe1d%2FPldoiJhaqHcI5irJjGa7xLS9H2s%2B9sl5aWN3SGUM3GW50zKh29ElgMV8OI6CsU9He3FRS8qKCrbxX04gHiexL0brZjSrbquux2TKUSOrwNmiJCdbYrky74pGXZ6Mw71fC1phIdNOBZHhFYUzaVMyJad5qXn6fpdR1U9WsYtWaSQL8F6U9hW72Fw4zL5AVKC9x0N5c0ch7NBnNJkjz%2Bo7CYC8d%2FtwYf%2Fgc%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
