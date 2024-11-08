// Вариант № 9, задача 1
#include <stdio.h>

int main() {
    int m, n;
    int new_m, new_n;
    printf("Введите номер месяца:\n");
    scanf("%d", &m);
    printf("Введите номер дня:\n");
    scanf("%d", &n);
    if (m == 1 && n == 1) {
        printf("Дата: %d %d", 12, 31);
    }
    if (m == 2 && n == 1) {
        printf("Дата: %d %d", 1, 31);
    }
    if (m == 3 && n == 1) {
        printf("Дата: %d %d", 2, 28);
    }
    if (m == 4 && n == 1) {
        printf("Дата: %d %d", 3, 31);
    }
    if (m == 5 && n == 1) {
        printf("Дата: %d %d", 4, 30);
    }
    if (m == 6 && n == 1) {
        printf("Дата: %d %d", 5, 31);
    }
    if (m == 7 && n == 1) {
        printf("Дата: %d %d", 6, 30);
    }
    if (m == 8 && n == 1) {
        printf("Дата: %d %d", 7, 31);
    }
    if (m == 9 && n == 1) {
        printf("Дата: %d %d", 8, 31);
    }
    if (m == 10 && n == 1) {
        printf("Дата: %d %d", 9, 30);
    }
    if (m == 11 && n == 1) {
        printf("Дата: %d %d", 10, 31);
    }
    if (m == 12 && n == 1) {
        printf("Дата: %d %d", 11, 30);
    }
    if (n != 1) {
        if (m == 2 && n > 28) {
            printf("Такой даты нет");
        }
        else {
            printf("Дата: %d %d", m, n - 1);
        }
    }
    return 0;
}