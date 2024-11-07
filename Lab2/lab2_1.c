#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float A, B, C, D;
    char *point;
    printf("Введите точку A:\n");
    scanf("%f", &A);
    printf("Введите точку B:\n");
    scanf("%f", &B);
    printf("Введите точку C:\n");
    scanf("%f", &C);
    printf("Введите точку D:\n");
    scanf("%f", &D);
    float AB = fabs(A - B);
    float AC = fabs(A - C);
    float AD = fabs(A - D);
    float min_distance = AB;
    point = "B";
    if (AC < min_distance) {
        min_distance = AC;
        point = "C";
    }
    if (AD < min_distance) {
        min_distance = AD;
        point = "D";
    }
    printf("Самая ближайшая точка к A: %s\n", point);
    printf("Расстояние до точки A: %f", min_distance);
}