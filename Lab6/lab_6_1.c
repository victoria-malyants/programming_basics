// Билет № 2, задача № 1
#include <stdio.h>

int main() {
    int i, n, sum_n;
    i = 1;
    sum_n = 0;
    printf("Введите число n: \n");
    scanf("%d", &n);
    while (i <= n) {
        sum_n += i;
        i += 1;
    }
    printf("Сумма чисел от 1 до n:\n %d\n", sum_n);
}