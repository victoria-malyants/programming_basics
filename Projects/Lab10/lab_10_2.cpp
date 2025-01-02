// Билет № 8, задача № 2
#include <iostream>
using namespace std;
int r(int N, int A[]) {
    int count = 0;
    int j = 1;
    while (j < N) {
        if (A[j - 1] > A[j]) {
            if ((A[j] < A[j + 1] && (A[j] != A[N - 1])) || (A[j] == A[N - 1])) {
                count += 1;
            }
        }
        j += 1;
    }
    return count;
}
int main() {
    int N, k;
    int i = 0;
    cout << "Введите размер массива N: \n";
    cin >> N;
    int A[N];
    while (i != N) {
        cout << "Введите элемент массива: \n";
        cin >> k;
        A[i] = k;
        i += 1;
    }
    cout << r(N, A);
}