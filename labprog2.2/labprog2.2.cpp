#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;

    cout << "Введите число: ";
    cin >> a;

    c = a % 10;
    a /= 10;
    b = (c * 10) + a;

    cout << "Обратное число: " << b << endl;
}