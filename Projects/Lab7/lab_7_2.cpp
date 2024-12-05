// Билет № 29, задача № 2
#include <iostream>
using namespace std;
int main() {
    int N, l;
    int k = 0;
    int n = 0;
    int m = 100000000;
    int count = 0;
    cout << "Введите размер массива N: \n";
    cin >> N;
    int A[N];
    while (k != N) {
        cout << "Введите элемент массива: \n";
        cin >> l;
        A[k] = l;
        k += 1;
    }
    int p = N - 1;
    while (p >= 0) {
        if (A[p] % 2 == 0) {
            cout << "\n" << A[p] << "\n";
            count += 1;
        }
        p -= 1;
    }
    cout << "\nКоличество четных чисел в массиве: " << count << "\n";
}