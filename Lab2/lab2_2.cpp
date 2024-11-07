#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, y1, x3, y3;
    cout<<"Введите координаты двух противоположных вершин прямоугольника\n";
    cin >> x1;
    cin >> y1;
    cin >> x3;
    cin >> y3;
    float side1 = fabs(x3 - x1);
    float side2 = fabs(y3 - y1);
    cout << "Площадь прямоугольника: " << side1 * side2 << "\n";
    cout << "Периметр прямоугольника: " << side1 * 2 + side2 * 2 << "\n";
}