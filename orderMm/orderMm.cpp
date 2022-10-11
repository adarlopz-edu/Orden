#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, var;

    cout << "Introduce el valor a:";
    cin >> a;
    cout << "Introduce el valor b:";
    cin >> b;
    cout << "Introduce el valor c:";
    cin >> c;
    cout << "Introduce el valor d:";
    cin >> d;

    if (a > b) {
        var = a;
        a = b;
        b = var;
    }

    if (a > c) {
        var = a;
        a = c;
        c = var;
    }

    if (a > d) {
        var = a;
        a = d;
        d = var;
    }

    if (b > c) {
        var = b;
        b = c;
        c = var;
    }

    if (b > d) {
        var = b;
        b = d;
        d = var;
    }

    if (c > d) {
        var = c;
        c = d;
        d = var;
    }

    cout << a << "\n" << b << "\n" << c << "\n" << d;

}