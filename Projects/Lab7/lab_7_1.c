// Билет № 29, задача № 1
#include <stdio.h>
int main() {
    int N, l;
    int k = 0;
    int n = 0;
    int m = 100000000;
    printf("Введите размер массива N: \n");
    scanf("%d", &N);
    int A[N];
    while (k != N) {
        printf("Введите элемент массива: \n");
        scanf("%d", &l);
        A[k] = l;
        k += 1;
    }
    while (n != N) {
        if (n % 2 == 0) {
            if (m > A[n]) {
                m = A[n];
            }
        }
        n += 1;
    }
    printf("%d", m);
}