#include <cmath>
#include <iostream>
using namespace std;

void zadacha1() {
    double h, R, r, l, V, S;
    cout << "Введите длину высоты усеченного конуса" << endl;
    cin >> h;
    cout << "Введите длину большего радиуса усеченного конуса" << endl;
    cin >> R;
    cout << "Введите длину меньшего радиуса усеченного конуса" << endl;
    cin >> r;
    if (r != R && r > 0 && R > 0 && h > 0) {
        l = sqrt(pow(h, 2) + pow((R - r), 2));
        cout << "Длина образующей равна ";
        cout << l << endl;
        V = (3.14 * h * (pow(R, 2) + R * r + pow(r, 2))) / 3;
        S = 3.14 * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << "Объём равен (примем pi за 3,14) " << V << endl;
        cout << "Площадь поверхности равна (примем pi за 3,14) " << S << endl;
    }
    else if (r == R && !(r == 0 && R == 0)) {
        l = h;
        V = (3.14 * h * (pow(R, 2) + R * r + pow(r, 2))) / 3;
        S = 3.14 * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << "Это цилиндр, V = " << V << ", S = " << S;
    }
    else if ((r == 0 || R == 0) && !(r == 0 && R == 0) && h > 0) {
        l = sqrt(pow(h, 2) + pow(R, 2));
        V = (3.14 * h * (pow(R, 2) + R * r + pow(r, 2))) / 3;
        S = 3.14 * (pow(R, 2) + (R + r) * l + pow(r, 2));
        cout << "Это конус, но не усеченный, его объем = " << V << ", его площадь = " << S;
    }
    else if (r == 0 && R == 0 && h > 0) {
        cout << "Это отрезок, V = 0, S = 0";
    }
    else if (h == 0) {
        cout << "Это круг";
        if (R>=0 && r>=0){
            cout << "S = "<< 3.14 * pow(R,2);
        }
    }
    else {
        cout << "Данные введены неправильно";
    }

}
void zadacha2() {
    double x, a, w;
    cout << "Введите х" << endl;
    cin >> x;
    cout << "Введите a" << endl;
    cin >> a;
    if ((abs(x) < 1) && (x!=0)) {
        w = a * log(abs(x));
        cout << "w = " << w;
        if (x == 0) {
            cout << "Логарифм не определен";
        }
    }
    else {
        if ((a - pow(x, 2)) >= 0) {
            w = sqrt(a - pow(x, 2));
            cout << "w = " << w;
        }
        else {
            cout << "Подкоренное выражение отрицательно";
        }
    }

}

void zadacha3() {
    double b, y, x;
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Введите b" << endl;
    cin >> b;
    if (((b - y) > 0) && ((b - x) >= 0)) {
        cout << "z = " << log(b - y) * sqrt(b - x);
    }
    else {
        cout << "Данные введены неправильно";
    }
}

void zadacha4() {
    int N;
    cout << "Введите число ";
    cin >> N;
    if (N > 0) {
        for (int i = N; i < N + 10; i++) {
            cout << i + 1 << " ";
        }
    }
    else {
        for (int i = 1; i < 11; i++) {
            cout << i << " ";
        }
    }

}

void zadacha5() {
    cout << "x\t y" << endl;
    for (double x = -4; x <= 4; x += 0.5) {
        if (x != 1) {
            cout << x << "  \t";
            cout << (pow(x, 2) - 2 * x + 2) / (x - 1) << endl;
        }
        else {
            cout << x << "  \t";
            cout << "На 0 делить нельзя" << endl;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    zadacha5();
}