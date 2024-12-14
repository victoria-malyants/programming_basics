// Билет № 8, задача № 2
#include <iostream>
using namespace std;
int main() {
    int A, B, C, i;
    int r = 0;
    cout << "Введите точку A: \n";
    cin >> A;
    cout << "Введите точку B: \n";
    cin >> B;
    cout << "Введите точку C: \n";
    cin >> C;
    if (B < C) {
        if ((A >= B) && (A <= C)) {
            cout << "точка A принадлежит отрезку [B:C]";
        }
        else {
            cout << "точка A не принадлежит отрезку [B:C]";
        }
    }
    else {
        if ((A >= C) && (A <= B)) {
            cout << "точка A принадлежит отрезку [B:C]";
        }
        else {
            cout << "точка A не принадлежит отрезку [B:C]";
        }
    }
        
}