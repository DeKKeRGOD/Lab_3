#include <stdio.h>
#include <stdlib.h>
void main()
{
double *pMas; // Указатель на массив
int n; // Заранее неизвестная размерность массива
// Вводим размерность массива с клавиатуры
printf_s("n=");
scanf_s("%d", &n);
// Выделяем память динамически
pMas = (double *)malloc(n*sizeof(double));
// Заполняем массив случайными числами в интервале [0, 100)
// и печатаем число
for (int i = 0; i<n; i++)
{
pMas[i] = rand() % 100;
printf("%f ", pMas[i]);
}
// Переворачиваем массив
for (int i = 0; i<n / 2; i++)
{
// Меняем 2 элемента местами, используя буферную переменную
double buf = pMas[i];
pMas[i] = pMas[n - 1 - i];
pMas[n - 1 - i] = buf;
}
// Печатаем полученный массив
printf("\n");
for (int i = 0; i<n; i++)
printf("%f ", pMas[i]);
// Освобождаем память
free(pMas);
// Останавливаем программу, ждем нажатия любой клавиши
system("pause");// Останавливаем программу, ждем нажатия любой клавиши
}
