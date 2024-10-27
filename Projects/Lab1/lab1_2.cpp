// Вариант № 9, задача 2
// Перестановка цифр в числах
#include <iostream>
#include <string>
using namespace std;

void swap_digits3(int number) {
    if (number >= 100 && number < 1000) {
        string digits = to_string(number);
        string swapp = digits[2] + digits.substr(1, 1) + digits[0];
        cout << "Полученное число: " << swapp << endl;
    } else {
        cout << "Введите трехзначное число." << endl;
    }
}

void swap_digits4(int number) {
    if (number >= 100 && number < 1000) {
        int new_number = number * 11;
        string d = to_string(new_number);
        string swapped = d.substr(0, 1) + d[2] + d[1] + d.substr(3, 3);
        cout << "Полученное число: " << swapped << endl;
    } else {
        cout << "Введите трехзначное число." << endl;
    }
}

int main()
{
    int n;
    cout << "Введите трехзначное число:\n";
    cin >> n;
    swap_digits3(n);
    swap_digits4(n);
    return 0;
}