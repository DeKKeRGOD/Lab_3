#include <stdio.h>
#include <stdlib.h>
void main()
{
double *aMas;
int n; // Вводим размерность массива с клавиатуры
printf_s("n=");
scanf_s("%d", &n);
aMas = (double *)malloc(n*sizeof(double));
for (int i = 0; i<n; i++)
{
aMas[i] = rand() % 100; // Заполняем массив случайными числами в интервале от 0 до 99
printf("%f ", aMas[i]);
}
for (int i = 0; i<n / 2; i++)
{
double a = aMas[i];
aMas[i] = aMas[n - 1 - i];
aMas[n - 1 - i] = buf;
}
printf("\n");
for (int i = 0; i<n; i++)
printf("%f ", aMas[i]);
free(aMas);
system("pause");
}
