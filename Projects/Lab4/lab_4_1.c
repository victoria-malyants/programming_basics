// Билет № 2, задача № 1
#include <stdio.h>

int main() {
    int n, sum_n, i;
    i = 1;
    printf("Введите число n:\n");
    scanf("%d", &n);
    while (i <= n) {
        sum_n += i;
        i += 1;
    }
    printf("Сумма чисел от 1 до n:\n %d\n", sum_n - 1);
}