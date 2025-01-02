// Билет № 8, задача № 1
#include <stdio.h>
void r(int N, int A[]) {
    for (int j = 0; j < N; j++) {
        if (A[j] % 2 != 0) {
            printf("%d \n", A[j]);
        }
    }
}
int main() {
    int N;
    printf("Введите размер массива N: \n");
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        printf("Введите элемент массива: \n");
        scanf("%d", &A[i]);
    }
    r(N, A);
}