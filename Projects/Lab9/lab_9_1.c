// Билет № 8, задача № 1
#include <stdio.h>
#include <math.h>
int main() {
    int a1, a2, h, a3, a4, p;
    printf("Введите основание трапеции: \n");
    scanf("%d", &a1);
    printf("Введите основание трапеции: \n");
    scanf("%d", &a2);
    printf("Введите высоту трапеции: \n");
    scanf("%d", &h);
    if (a1 < a2) {
        a3 = (((a2 - a1) / 2) * ((a2 - a1) / 2)) + (h * h);
    }
    if (a1 > a2) {
        a3 = (((a2 - a1) / 2) * ((a2 - a1) / 2)) + (h * h);
    }
    a4 = sqrt(a3);
    p = a1 + a2 + (2 * a4);
    printf("Периметр равен = %d", p);
}
