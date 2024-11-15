// Билет № 2, задача № 2
#include <iostream>

using namespace std;
int main(){
    int i, n;
    i = 1;
    cout << "Введите число n:\n";
    cin >> n;
    for (i = n; i >= 1; i--) {
        if (n % i == 0) {
            cout << " " << i;
        }
    }
}