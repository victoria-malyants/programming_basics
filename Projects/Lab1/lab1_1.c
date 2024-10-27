// Вариант № 9, задача 1
// Найти площадь кольца
#include <stdio.h>
#include <math.h>
int main()
{
    float r1, r2;
    float s;
    printf("Площадь кольца по внутреннему и внешнему радиусу\n");
    printf("Введите внутренний радиус\n");
    scanf("%f", &r1);
    printf("Введите внешний радиус\n");
    scanf("%f", &r2);
    s = M_PI * (r2 * r2  - r1 * r1);
    printf("Площадь кольца: %f", s);
    printf("\nЧтобы закончить, нажмите <Enter>");
}