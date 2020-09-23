#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("\nВведите стороны треугольника\n");
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == b && b == c)
	{
		printf("Треугольник равносторонний");
	}
	else
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		{
			printf("Треугольник прямоугольный");
		}
		else
		{
			printf("Треугольник простой");
		}
	return 0;
}
