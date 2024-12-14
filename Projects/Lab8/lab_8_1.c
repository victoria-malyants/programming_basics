// Билет № 15, задача № 1
#include <stdio.h>
int main() {
    int M_n, N_n, M, N, i, j, k, h;
    int s = 0;
    printf("Введите количество строк: \n");
    scanf("%d", &M_n);
    printf("Введите количество столбцов: \n");
    scanf("%d", &N_n);
    M = M_n - 1;
    N = N_n - 1;
    int a[M][N];
    int l[M_n];
    for (i = 0; i < M_n; i++) {
        for (j = 0; j < N_n; j++) {
            printf("Введите элемент: \n");
            scanf("%d", &k);
            a[i][j] = k;
        }
    }
    for (i = 0; i < M_n; i++) {
        l[i] = a[i][0];
        for (j = 1; j < N_n; j++) {
                if (a[i][j] < l[i]) {
                    l[i] = a[i][j];
                }
            }
    }
    for (h = 0; h < M_n; h++) {
        if (l[h] > s) {
            s = l[h];
        }
    }
    printf("%d\n", s);
}