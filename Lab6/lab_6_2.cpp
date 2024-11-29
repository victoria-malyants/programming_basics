// Билет № 2, задача № 2
#include <iostream>

using namespace std;

int main() {
    int n, i, l;
    i = 1;
    l = 0;
    cout << "Введите число n:\n";
    cin >> n;
    while (l < 1) {
        for (i = n; i >= 1; i--) {
            if (n % i == 0) {
                cout << " " << i;
                }
        }
        l += 1;
    }
}