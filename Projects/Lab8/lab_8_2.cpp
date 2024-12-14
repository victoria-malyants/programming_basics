// Билет № 19, задача № 2
#include <iostream>
using namespace std;
int main(){
    int M_n, N_n, M, N, i, j, k;
    cout << "Введите количество строк: \n";
    cin >> M_n;
    cout << "Введите количество столбцов: \n";
    cin >> N_n;
    M = M_n - 1;
    N = N_n - 1;
    int a[M][N];
    for (i = 0; i < M_n; i++) {
        for (j = 0; j < N_n; j++) {
            cout << "Введите элемент: \n";
            cin >> k;
            a[i][j] = k;
        }
    }
    for (i = 0; i < M_n; i++) {
        for (j = 0; j < N_n; j++) {
            if (a[i][j] > 0) {
                a[i][j] = 1;
            } 
            if (a[i][j] < 0 && a[i][j] % 2 != 0) {
                a[i][j] = 0;
            }
        }
    }
    for (i = 0; i < M_n; i++) {
        for (j = 0; j < N_n; j++) {
            cout << a[i][j] << "\n";
        }
    }
}

