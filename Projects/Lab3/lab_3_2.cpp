// Вариант № 9, задача 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Введите возраст:\n";
    cin >> n;
    if (n < 0) {
        cout << "такого возраста нет";
    }
    if (n >= 0 && n <= 18) {
        cout << "детство и юность";
    }
    if (n >= 19 and n <= 60) {
        cout << "зрелость";
    }
    if (n > 60) {
        cout << "пожилой возраст";
    }
}